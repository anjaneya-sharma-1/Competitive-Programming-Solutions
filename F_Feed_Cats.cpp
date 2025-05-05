#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution {
public:
    void solve() {
        int n, m;
        cin >> n >> m;
        vector<pair<int, int>> a(m);
        vector<int> op(n + 1);
        vector<vector<int>> del(n + 1);
        for (auto &e : a) {
            cin >> e.first >> e.second;
            op[e.first]++;
            del[e.second].emplace_back(e.first);
        }

        multiset<int> cur;
        vector<int> dp(n + 1, 0);

        for (int i = 1; i <= n; ++i) {
            dp[i] = dp[i - 1];

            
            for (int cnt = 0; cnt < op[i]; ++cnt) {
                cur.insert(i);
            }

           
            if (!cur.empty()) {
                int earliest_start = *cur.begin();
                dp[i] = max(dp[i], dp[earliest_start - 1] + (int)cur.size());
            }


            for (int start : del[i]) {
                auto it = cur.find(start);
                if (it != cur.end()) cur.erase(it);
            }
        }

        cout << dp[n] << "\n";
    }
};

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    ll t;
    cin >> t;
    
    
    while (t--){ 
        Solution* s = new Solution(); 
        s->solve();
      

        }
    return 0;
}