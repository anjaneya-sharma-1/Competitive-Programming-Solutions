#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007

ll power(ll a, int b) {
    ll ans = 1;
    while (b) {
        if (b & 1) ans = ans * a % MOD;
        a = a * a % MOD;
        b >>= 1;
    }
    return ans;
}

int DFS(int v, const vector<vector<int>>& edges, int p, int dep, vector<int>& ped) {
    int mdep = dep;
    for (int u : edges[v]) {
        if (u == p) continue;
        mdep = max(mdep, DFS(u, edges, v, dep + 1, ped));
    }
    ped[v] = mdep - dep + 1;
    return mdep;
}

class Solution {
public:
    void solve() {
        int n;
        cin >> n;
        vector<vector<int>> edges(n);
        for (int i = 0; i < n - 1; i++) {
            int u, v;
            cin >> u >> v;
            --u; --v;
            edges[u].push_back(v);
            edges[v].push_back(u);
        }
        vector<int> ped(n);
        DFS(0, edges, -1, 0, ped);
        ll p = power(2, n - 1);
        ll ans = 0;
        for (int i = 0; i < n; i++) {
            ans = (ans + p * ped[i] % MOD) % MOD;
        }
        cout << ans << "\n";
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
