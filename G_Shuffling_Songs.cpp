#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution {
public:
    void solve() {
        ll n;
        cin >> n;
        vector<int> g(n), w(n);
        unordered_map<string, int> id;
        int curr = 1;
        for (int i = 0; i < n; i++) {
            string g1, w1;
            cin >> g1 >> w1;
            if (!id[g1]) id[g1] = curr++;
            if (!id[w1]) id[w1] = curr++;
            g[i] = id[g1];
            w[i] = id[w1];
        }

        int full = 1 << n;
        vector<vector<bool>> dp(full, vector<bool>(n, false));
        for (int i = 0; i < n; ++i) {
            dp[1 << i][i] = true;
        }
        for (int mask = 0; mask < full; ++mask) {
            for (int last = 0; last < n; ++last) {
                if (!dp[mask][last]) continue;
                for (int nxt = 0; nxt < n; ++nxt) {
                    if ((mask >> nxt) & 1) continue;

                    if (g[last] == g[nxt] || w[last] == w[nxt]) {
                        dp[mask | (1 << nxt)][nxt] = true;
                    }
                }
            }
        }
        int best = 0;
        for (int mask = 0; mask < full; ++mask) {
            for (int i = 0; i < n; ++i) {
                if (dp[mask][i]) {
                    best = max(best, __builtin_popcount(mask));
                }
            }
        }
        cout << (n - best) << "\n";
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;
    while (t--) {
        Solution sol;
        sol.solve();
    }
    return 0;
}