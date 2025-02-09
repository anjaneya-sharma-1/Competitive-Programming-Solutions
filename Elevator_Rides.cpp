#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 1000000007

class Solution {
public:
    ll recur(vector<ll>& dp, ll mask, vector<ll>& v, ll x) {
        if (mask == 0) {
            return 0; 
        }
        if (dp[mask] != 21) {
            return dp[mask];
        }
        
        ll count = 0;
        vector<ll> ind;
        for (int i = 0; i < v.size(); i++) {
            if (mask & (1 << i)) {
                count++;
                ind.push_back(i);
            }
        }

        for (int i = 0; i < (1 << count); i++) {
            ll sum = 0;
            ll curr = 0;
            for (int j = 0; j < count; j++) {
                if (i & (1 << j)) {
                    sum += v[ind[j]];
                    curr |= (1 << ind[j]);  
                }
            }
            if (sum <= x) {
                dp[mask] = min(dp[mask], 1 + recur(dp, mask ^ curr, v, x));
            }
        }
        return dp[mask];
    }

    void solve() {
        ll n, x;
        cin >> n >> x;
        vector<ll> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        vector<ll> dp(1 << n, 21); 
        dp[0] = 0;
        cout << recur(dp, (1 << n) - 1, v, x) << endl;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll t = 1;
    while (t--) { 
        Solution s;  
        s.solve();
    }

    return 0;
}
