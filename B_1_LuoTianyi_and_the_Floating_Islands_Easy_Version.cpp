#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = 1e9+7;

ll modexp(ll a, ll e=MOD-2) {
    ll r = 1;
    a %= MOD;
    while (e) {
        if (e&1) r = r*a % MOD;
        a = a*a % MOD;
        e >>= 1;
    }
    return r;
}

int n, k;
vector<vector<int>> adj;
vector<ll> sub;

ll dfs(int u, int p) {
    sub[u] = 1;
    for (int v : adj[u]) if (v != p) {
        sub[u] += dfs(v, u);
    }
    return sub[u];
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> k;
    adj.assign(n+1, {});
    for (int i = 0; i < n-1; i++){
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    if (k == 1 || k == 3) {
        cout<<1<<endl;
        return 0;
    }
    sub.assign(n+1, 0);
    dfs(1, 0);
    ll sumDist = 0;
    for (int u = 2; u <= n; u++) {
        sumDist = (sumDist + sub[u] * (n - sub[u]) % MOD) % MOD;
    }

    ll denom = (ll)n * (n-1) % MOD;
    ll ans = (1 + 2 * sumDist % MOD * modexp(denom) % MOD) % MOD;
    cout << ans << "\n";
    return 0;
}
