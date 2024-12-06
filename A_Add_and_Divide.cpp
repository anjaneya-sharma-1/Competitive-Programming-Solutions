#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
void solve() {
    int a, b;
        std::cin >> a >> b;
        int ans = 1e9;
        for (int i = 0; i < 30; i++) {
            if (b + i == 1) {
                continue;
            }
            int res = i;
            int x = a;
            while (x > 0) {
                x /= b + i;
                res++;
            }
            ans = std::min(ans, res);
        }
        std::cout << ans << "\n";

    
}

};
int main(){
    ll t;
    cin >> t;
    
    while (t--){ 
        Solution* s = new Solution(); 
        s->solve();
        delete s; 

        }
    return 0;
}