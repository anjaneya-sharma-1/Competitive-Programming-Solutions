#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007

class Solution {
public:
    void solve() {
        ll n;
        cin >> n;

        // Step 1: Compute the first part of the formula
        ll part1 = (n % MOD) * 337 % MOD;
        part1 = part1 * (n + 1) % MOD;
        part1 = part1 * (2 * n + 1) % MOD;
        part1 = part1 % MOD;

        // Step 2: Compute the second part of the formula
        ll part2 = ((n - 1) % MOD) * 337 % MOD;
        part2 = part2 * (n % MOD) % MOD;
        part2 = part2 * (2 * (n - 1) + 1) % MOD;
        part2 = part2 % MOD;

        // Step 3: Compute the third part of the formula
        ll part3 = 1011 % MOD;
        part3 = part3 * (n - 1) % MOD;
        part3 = part3 * n % MOD;
        part3 = part3 % MOD;

        // Final answer is the sum of all parts, modulo MOD
        ll ans = (part1 + part2) % MOD;
        ans = (ans + part3) % MOD;

        cout << ans << endl;
    }
};

int main() {
    ll t;
    cin >> t;

    while (t--) {
        Solution* s = new Solution();
        s->solve();
        delete s;
    }

    return 0;
}
