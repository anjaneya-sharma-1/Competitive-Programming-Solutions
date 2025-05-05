#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007

class Solution{
public:
    void solve() {
        int n;
        cin >> n;
        vector<ll> v(n+1), pref(n+1);
        for (int i = 1; i <= n; i++) {
            cin >> v[i];
            pref[i] = pref[i-1] + v[i];
        }

        vector<ll> dp(n+1);
        for (int i = 1; i <= n; i++) {
            ll full_time = (pref[i] + i - 1) / i;
            dp[i] = i == 1 ? full_time : max(dp[i-1], full_time);
        }
        ll total = pref[n];
        vector<ll> time_i(n+1);
        for (int i = 1; i <= n; i++) {
            time_i[i] = max(dp[i], (total + i - 1) / i);
        }
        
        int q;
        cin >> q;
        while (q--) {
            ll t;
            cin >> t;
            int l = 1, r = n, ans = -1;
            while (l <= r) {
                int m = (l + r) / 2;
                if (time_i[m] <= t) {
                    ans = m;
                    r = m - 1;
                } else l = m + 1;
            }
            cout << ans << '\n';
        }
    }
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    Solution s;
    s.solve();
    return 0;
}