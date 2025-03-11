#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007

ll modInverse(ll a, ll mod) {
    ll res = 1, p = mod - 2;
    while (p) {
        if (p % 2) res = (res * a) % mod;
        a = (a * a) % mod;
        p /= 2;
    }
    return res;
}

class Solution {
public:
    void solve() {
        ll n, m;
        cin >> n >> m;
        
        vector<ll> a(n);
        unordered_map<ll, ll> mp;

        for (ll i = 0; i < n; i++) {
            cin >> a[i];
            mp[a[i]]++;
        }

    
        vector<ll> v;
        v.reserve(mp.size()); 
        for (auto &x : mp) {
            v.push_back(x.first);
        }
        sort(v.begin(), v.end());

        vector<ll> diff(v.size() + 1, 1);
        vector<pair<ll, ll>> dp(v.size() + 1, {1, 1});

        for (ll i = 0; i < v.size(); i++) {
            dp[i].first = mp[v[i]];
            ll u = upper_bound(v.begin(), v.end(), v[i] + m - 1) - v.begin();
            if (u < v.size()) dp[u].second = mp[v[i]];
        }

        diff[0] = dp[0].first;
        diff[0] = (diff[0] * modInverse(dp[0].second, MOD)) % MOD;

        for (ll i = 1; i < diff.size(); i++) {
            diff[i] = (diff[i - 1] * dp[i].first) % MOD;
            diff[i] = (diff[i] * modInverse(dp[i].second, MOD)) % MOD;
        }

        ll ans = 0;
        for (auto x : v) {
            if (upper_bound(v.begin(), v.end(), x) - lower_bound(v.begin(), v.end(), x - m + 1) >= m) {
                ans = (ans + diff[lower_bound(v.begin(), v.end(), x) - v.begin()]) % MOD;
            }
        }

        cout << ans << endl;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll t;
    cin >> t;
    while (t--) { 
        Solution s;
        s.solve();
    }
    
    return 0;
}
