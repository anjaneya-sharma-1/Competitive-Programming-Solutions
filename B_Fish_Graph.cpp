#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> adj(n);
    while (m--) {
        int u, v;
        cin >> u >> v;
        --u; --v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    // For each candidate u with degree >= 4
    for (int u = 0; u < n; ++u) {
        if ((int)adj[u].size() < 4) continue;
        // Try each neighbor v of u
        for (int v : adj[u]) {
            // Find a simple path from u to v without using edge (u,v)
            vector<int> parent(n, -1), stk;
            vector<bool> vis(n, false);
            function<bool(int)> dfs = [&](int x) {
                vis[x] = true;
                stk.push_back(x);
                if (x == v) return true;
                for (int w : adj[x]) {
                    if (x == u && w == v) continue;
                    if (!vis[w]) {
                        parent[w] = x;
                        if (dfs(w)) return true;
                    }
                }
                stk.pop_back();
                return false;
            };
            parent[u] = -2;
            if (!dfs(u)) continue;

            // Reconstruct path p from u to v
            vector<int> cycle = {v};
            int cur = parent[v];
            while (cur >= 0) {
                cycle.push_back(cur);
                cur = parent[cur];
            }
            reverse(cycle.begin(), cycle.end());

            // Select two extra neighbors of u not on cycle
            vector<int> extra;
            for (int w : adj[u]) {
                if (find(cycle.begin(), cycle.end(), w) == cycle.end()) {
                    extra.push_back(w);
                    if (extra.size() == 2) break;
                }
            }
            if (extra.size() < 2) continue;

            // Output result
            cout << "YES\n";
            cout << (cycle.size() + 2) << '\n';
            // print cycle edges
            for (int i = 1; i < (int)cycle.size(); ++i) {
                cout << cycle[i-1]+1 << ' ' << cycle[i]+1 << '\n';
            }
            // close the cycle by (last->first)
            cout << cycle.back()+1 << ' ' << cycle.front()+1 << '\n';
            // print the two extra edges
            cout << u+1 << ' ' << extra[0]+1 << '\n';
            cout << u+1 << ' ' << extra[1]+1 << '\n';
            return;
        }
    }
    cout << "NO\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
