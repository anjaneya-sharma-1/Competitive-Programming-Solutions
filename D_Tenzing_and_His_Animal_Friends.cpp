#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution {
public:
    void solve() {
        int n, m;
        cin >> n >> m;
        static ll dis[100][100];
        const ll INF = (ll)3e18;
        for(int i = 0; i < n; ++i)
            for(int j = 0; j < n; ++j)
                dis[i][j] = (i == j ? 0 : INF);
        while (m--) {
            int u, v;
            ll w;
            cin >> u >> v >> w;
            --u; --v;
            dis[u][v] = min(dis[u][v], w);
            dis[v][u] = min(dis[v][u], w);
        }
        for (int k = 0; k < n; ++k)
            for (int i = 0; i < n; ++i)
                for (int j = 0; j < n; ++j)
                    dis[i][j] = min(dis[i][j], dis[i][k] + dis[k][j]);
        if (dis[0][n-1] > INF/2) {
            cout << "inf";
            return;
        }
        vector<int> ord(n);
        iota(ord.begin(), ord.end(), 0);
        sort(ord.begin()+1, ord.end(), [&](int a, int b) {
            return dis[0][a] < dis[0][b];
        });
        string s(n, '0');
        vector<pair<string,ll>> ans;
        for (int i = 0; i < n-1; ++i) {
            int u = ord[i], v = ord[i+1];
            s[u] = '1';
            ans.emplace_back(s, dis[0][v] - dis[0][u]);
            if (v == n-1) break;
        }
        cout << dis[0][n-1] << ' ' << ans.size() << '\n';
        for (auto &pr : ans)
            cout << pr.first << ' ' << pr.second << '\n';
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    Solution *s = new Solution();
    s->solve();
    delete s;
    return 0;
}
