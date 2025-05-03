#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007

class Solution {
public:
    void solve() {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> adj(n + 1);
        for (int i = 0; i < m; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        vector<int> disc(n + 1, 0), low(n + 1, 0), subsize(n + 1, 0);
        vector<bool> visited(n + 1, false);
        int timer = 0;
        ll best_cut = 0;
        
        function<void(int, int)> dfs = [&](int u, int parent) {
            visited[u] = true;
            disc[u] = low[u] = ++timer;
            subsize[u] = 1;
            for (int v : adj[u]) {
                if (v == parent) continue;
                if (!visited[v]) {
                    dfs(v, u);
                    subsize[u] += subsize[v];
                    low[u] = min(low[u], low[v]);
                    
                    if (low[v] > disc[u]) {
                        ll s = subsize[v];
                        best_cut = max(best_cut, s * (ll)(n - s));
                    }
                } else {
                    low[u] = min(low[u], disc[v]);
                }
            }
        };
        
        dfs(1, -1);
        
        
        ll total_pairs = (ll)n * (n - 1) / 2;
        
        ll answer = total_pairs - best_cut;
        cout << answer << '\n';
    }
};

int main() {
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
