#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define BASE1 131
#define BASE2 137
#define MOD1 1000000007
#define MOD2 1000000009


struct hash_pair {
    size_t operator()(const pair<ll, ll>& p) const {
        return hash<ll>()(p.first) ^ (hash<ll>()(p.second) << 1);
    }
};

class Solution {
public:
    void solve() {
        ll n;
        cin >> n;
        vector<string> st(n);
        unordered_map<pair<ll, ll>, ll, hash_pair> hashFreq;
        ll totalLen = 0;

        for (int i = 0; i < n; ++i) {
            string s;
            cin >> s;
            st[i] = s;
            totalLen += s.length();

            ll hash1 = 0, hash2 = 0;
            for (char c : s) {
                hash1 = (hash1 * BASE1 + c) % MOD1;
                hash2 = (hash2 * BASE2 + c) % MOD2;
                hashFreq[{hash1, hash2}]++;
            }
        }

        ll ans = 2 * totalLen * n;

        for (int i = 0; i < n; ++i) {
            string s = st[i];
            reverse(s.begin(), s.end());
            ll hash1 = 0, hash2 = 0;
            for (char c : s) {
                hash1 = (hash1 * BASE1 + c) % MOD1;
                hash2 = (hash2 * BASE2 + c) % MOD2;
                ans -= 2 * hashFreq[{hash1, hash2}];
            }
        }

        cout << ans << "\n";
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t = 1;
    while (t--) {
        Solution s;
        s.solve();
    }
    return 0;
}
