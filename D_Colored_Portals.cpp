#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
const int INF= 1e9;
class Solution{
    public:
    
   
void solve() {
    vector<string> vars= {"BG", "BR", "BY", "GR", "GY", "RY"};
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
      string s;
      cin >> s;
      
      for(int j=0;j<6;j++){
          if(s==vars[j]){
              a[i]=j;
              break;
          }}
    }
    vector<vector<int>> lf(n), rg(n);
    for (int o = 0; o < 2; ++o) {
      vector<int> last(6, -INF);
      for (int i = 0; i < n; ++i) {
        last[a[i]] = (o ? n - i - 1 : i);
        (o ? rg[n - i - 1] : lf[i]) = last;
      }
      reverse(a.begin(), a.end());
    }
    while (q--) {
      int x, y;
      cin >> x >> y;
      --x; --y;
      int ans = INF;
      for (int j = 0; j < 6; ++j) {
        if (a[x] + j != 5 && j + a[y] != 5) {
          ans = min(ans, abs(x - lf[x][j]) + abs(lf[x][j] - y));
          ans = min(ans, abs(x - rg[x][j]) + abs(rg[x][j] - y));
        }
      }
      if (ans > INF / 2) ans = -1;
      cout << ans << '\n';
    
}}

};
int main(){
    ios::sync_with_stdio(false); cin.tie(0);

    ll t;
    cin >> t;
    
    
    while (t--){ 
        Solution* s = new Solution(); 
        s->solve();
        delete s;
        }
    return 0;
}