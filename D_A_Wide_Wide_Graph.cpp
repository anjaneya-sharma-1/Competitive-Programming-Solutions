#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007

class Solution {
public:
    vector<vector<int>> adj;

    vector<int> findFarthestDistances(int n) {
        if (n == 0) return {};

        auto [u, dist0] = bfs(1, n);
        auto [v, dist_u] = bfs(u, n);
        auto [ignore, dist_v] = bfs(v, n);

        vector<int> result(n + 1);
        for (int i = 1; i <= n; ++i) {
            result[i] = max(dist_u[i], dist_v[i]);
        }

        return vector<int>(result.begin() + 1, result.end());
    }

    void solve() {
        ll n;
        cin >> n;
        adj.clear();
        adj.resize(n + 1);
        for (int i = 0; i < n - 1; ++i) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        vector<int> result = findFarthestDistances(n);
       

        vector<int> sortedResult = result;
        sort(sortedResult.begin(), sortedResult.end());

        for (int i = 1; i <= n; ++i) {
            ll ans = lower_bound(sortedResult.begin(), sortedResult.end(), i) - sortedResult.begin() + 1;
            ans=min(ans,n);
            cout << ans << " ";
        }
        cout << endl;
    }

private:
    pair<int, vector<int>> bfs(int start, int n) {
        vector<int> dist(n + 1, -1);
        queue<int> q;
        q.push(start);
        dist[start] = 0;
        int max_dist = 0;
        int farthest_node = start;

        while (!q.empty()) {
            int u = q.front();
            q.pop();
            for (int v : adj[u]) {
                if (dist[v] == -1) {
                    dist[v] = dist[u] + 1;
                    q.push(v);
                    if (dist[v] > max_dist) {
                        max_dist = dist[v];
                        farthest_node = v;
                    }
                }
            }
        }

        return {farthest_node, dist};
    }
};

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    ll t = 1;
    
    while (t--) { 
        Solution s;
        s.solve();
    }
    return 0;
}