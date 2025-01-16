#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
void solve() {
    int n;
    cin >> n;
    int ans;
    if (n <= 2) {
      ans = n;
    }
    else if (n % 2) {
      ans = n * (n - 1) * (n - 2);
    }
    else if (n % 2 == 0  &&  n % 3) {
      ans = (n) * (n - 1) * (n - 3);
    }
    else {
      ans = (n - 1) * (n - 2) * (n - 3);
    }
                   
    cout << ans;
    
}

};
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    ll t=1;
    
    
    while (t--){ 
        Solution* s = new Solution(); 
        s->solve();
        delete s; 

        }
    return 0;
}