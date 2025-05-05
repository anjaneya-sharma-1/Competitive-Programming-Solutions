#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll INF = LLONG_MAX / 4;

class Solution {
public:
    void solve() {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        vector<ll> cold(k+1), hot(k+1);
        
        cold[0] = hot[0] = 0;
        for (int i = 1; i <= k; i++) cin >> cold[i];
        for (int i = 1; i <= k; i++) cin >> hot[i];

        vector<ll> dp(k+1, INF), ndp(k+1);
        int prev = 0;
        dp[0] = 0;

        for (int idx = 0; idx < n; idx++) {
            int x = a[idx];
            ndp.assign(k+1, INF);
            for (int j = 0; j <= k; j++) {
                ll cur = dp[j];
                if (cur >= INF) continue;
                
                ll t1 = (prev == x ? hot[x] : cold[x]);
                
                ndp[j] = min(ndp[j], cur + t1);
                
                ll t2 = (j == x ? hot[x] : cold[x]);
                
                ndp[prev] = min(ndp[prev], cur + t2);
            }
            dp.swap(ndp);
            prev = x;
        }

        ll ans = INF;
        for (ll v : dp) ans = min(ans, v);
        cout << ans << '\n';
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        Solution sol;
        sol.solve();
    }
    return 0;
}
