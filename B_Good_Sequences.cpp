#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
void solve() {
    int n, ans = 1;
  cin >> n;
  vector<int> a(n), last_visit(1e6, -1), dp(n + 5);
  for (int i = 0; i < n; ++i) {
    cin >> a[i];
  }
 
  for (int i = 0; i < n; ++i) {
    dp[i] = 1;
    vector<int> div;
    for (int j = 1; j * j <= a[i]; ++j) {
      if (a[i] % j == 0) {
        if (last_visit[j] != -1  &&  j != 1) dp[i] = max(dp[i], dp[last_visit[j]] + 1);
        if (j != 1) div.push_back(j);
        if (a[i] / j != j) {
          if (last_visit[a[i] / j] != -1) dp[i] = max(dp[i], dp[last_visit[a[i] / j]] + 1);
          div.push_back(a[i] / j);
        }
      }
    }
    for (auto it : div) last_visit[it] = i;
    ans = max(ans, dp[i]);
  }   
  cout << ans << '\n';

    
}

};
int main(){
    ll t=1;
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    while (t--){ 
        Solution* s = new Solution(); 
        s->solve();
        delete s; 

        }
    return 0;
}