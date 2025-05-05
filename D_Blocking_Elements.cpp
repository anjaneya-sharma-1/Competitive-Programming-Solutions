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
        vector<ll> a(n);
        for(int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        ll l = 0, r = 1e9 * n;
        while (l < r) {
            ll m = (l + r) / 2;
            set<pair<ll,int>> pos;
            vector<ll> dp(n+1);
            int p2 = n;
            dp[n] = 0;
            pos.insert({dp[n], n});
            ll sum = 0;
            for (int j = n - 1; j >= 0; --j) {
                while (sum > m) {
                    sum -= a[p2 - 1];
                    pos.erase({dp[p2], p2});
                    --p2;
                }
                dp[j] = pos.begin()->first + a[j];
                pos.insert({dp[j], j});
                sum += a[j];
            }
            sum = 0;
            bool ok = false;
            for (int j = 0; j < n; ++j) {
                if (sum <= m && dp[j] <= m) {
                    ok = true;
                    break;
                }
                sum += a[j];
            }
            if (ok) r = m;
            else    l = m + 1;
        }
        cout << l << "\n";
    }
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    while (t--) {
        Solution* s = new Solution();
        s->solve();
        delete s;
    }
    return 0;
}
