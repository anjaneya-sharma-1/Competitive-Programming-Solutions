#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007

class Solution {
public:
    void solve() {
        int n;
        cin >> n;
        vector<int> a(n);
        for (auto& i : a) cin >> i;
        vector<int> pos(n);
        iota(pos.begin(), pos.end(), 0);
        vector<pair<int, int>> ans;
        for (int i = n - 1; i; --i) {
            vector<int> occ(i, -1);
            for (auto j : pos) {
                if (occ[a[j] % i] != -1) {
                    ans.emplace_back(j, occ[a[j] % i]);
                    pos.erase(find(pos.begin(), pos.end(), j));
                    break;
                }
                occ[a[j] % i] = j;
            }
        }
        reverse(ans.begin(), ans.end());
        cout << "YES\n";
        for (auto [x, y] : ans) cout << x + 1 << ' ' << y + 1 << '\n';
    }
};

int main(){
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
