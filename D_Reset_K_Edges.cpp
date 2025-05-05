#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007

class Solution{
public:
    void solve() {
        int n, k;
        cin >> n >> k;
        vector<vector<int>> g(n);
        for (int i = 1; i < n; ++i) {
            int p;
            cin >> p;
            --p;
            g[p].push_back(i);
        }

        vector<int> pd(n, -1), st;
        function<void(int,int)> init = [&](int v, int d) {
            st.push_back(v);
            if ((int)st.size() >= d)
                pd[v] = st[st.size() - d];
            for (int u : g[v]) init(u, d);
            st.pop_back();
        };

        vector<int> h(n);
        vector<int> ord;
        ord.reserve(n);
        queue<int> q;
        q.push(0);
        while (!q.empty()) {
            int v = q.front(); q.pop();
            ord.push_back(v);
            for (int u : g[v]) {
                h[u] = h[v] + 1;
                q.push(u);
            }
        }
        reverse(ord.begin(), ord.end());

        auto getCuts = [&](int d) {
            fill(pd.begin(), pd.end(), -1);
            st.clear();
            init(0, d);
            vector<char> used(n, false);
            int res = 0;
            function<void(int)> dfs = [&](int v) {
                used[v] = true;
                for (int u : g[v]) if (!used[u]) dfs(u);
            };
            for (int v : ord) {
                if (!used[v] && h[v] > d) {
                    ++res;
                    dfs(pd[v]);
                }
            }
            return res;
        };

        int l = 1, r = n - 1, ans = n;
        while (l <= r) {
            int m = (l + r) / 2;
            if (getCuts(m) <= k) {
                ans = m;
                r = m - 1;
            } else l = m + 1;
        }
        cout << ans << '\n';
    }
};

int main(){
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
