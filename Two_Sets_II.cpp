#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007

class Solution {
public:

    ll mod_exp(ll base, ll exp, ll mod) {
        ll result = 1;
        while (exp > 0) {
            if (exp % 2 == 1) {
                result = (result * base) % mod;
            }
            base = (base * base) % mod;
            exp /= 2;
        }
        return result;
    }

    void solve() {
        ll n;
        cin >> n;
        ll target = n * (n + 1) / 4;
        if ((n * (n + 1)) % 4) {
            cout << 0 << endl;
            return;
        }

        vector<ll> prev(target + 1, 0);
        prev[0] = 1;

        for (ll i = 1; i <= n; i++) {
            vector<ll> curr = prev;
            for (ll j = i; j <= target; j++) {
                curr[j] = (curr[j] + prev[j - i]) % MOD;
            }
            prev = curr;
        }

   
        ll mod_inv_2 = mod_exp(2, MOD - 2, MOD);
        cout << (prev[target] * mod_inv_2) % MOD << endl;
    }
};

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    ll t = 1;

    while (t--) {
        Solution* s = new Solution();
        s->solve();
        delete s;
    }
    return 0;
}
