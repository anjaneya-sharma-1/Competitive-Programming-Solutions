#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod = 1000000007;
const int N = 200005;

int power(int a, int b, int p) {
    if (b == 0) return 1;
    if (a == 0) return 0;
    ll res = 1;
    a %= p;
    while (b > 0) {
        if (b & 1) res = (res * a) % p;
        b >>= 1;
        a = (static_cast<ll>(a) * a) % p;
    }
    return int(res);
}

int fact[N], inv[N];

void pre() {
    fact[0] = inv[0] = 1;
    for (int i = 1; i < N; i++) fact[i] = static_cast<ll>(i) * fact[i - 1] % mod;
    for (int i = 1; i < N; i++) inv[i]  = power(fact[i], mod - 2, mod);
}

int nCr(int n, int r) {
    if (r > n || r < 0) return 0;
    return static_cast<ll>(fact[n]) * inv[r] % mod * inv[n - r] % mod;
}

class Solution {
public:
    void solve() {
        int n, m, k;
        cin >> n >> m >> k;
        ll sum_f = 0;
        for (int i = 0; i < m; i++) {
            int a, b, f;
            cin >> a >> b >> f;
            sum_f = (sum_f + f) % mod;
        }
        ll den      = static_cast<ll>(n) * (n - 1) / 2 % mod;
        ll den_inv  = power(den, mod - 2, mod);
        ll base     = sum_f * k % mod * den_inv % mod;
        ll avg_inc  = 0;
        for (int i = 1; i <= k; i++) {
            ll sum_i      = static_cast<ll>(i) * (i - 1) / 2 % mod;
            ll prob = static_cast<ll>(nCr(k, i))
            * power(static_cast<int>(den_inv), i, mod) % mod;
  
            ll unp       = (den - 1) * den_inv % mod;
            prob         = prob * power(unp, k - i, mod) % mod;
            avg_inc      = (avg_inc + sum_i * prob) % mod;
        }
        ll ans = (base + m * avg_inc) % mod;
        cout << ans << "\n";
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    pre();
    ll t;
    cin >> t;
    while (t--) {
        Solution* s = new Solution();
        s->solve();
        delete s;
    }
    return 0;
}
