#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 998244353
class Solution{
    public:
void solve() {
    int n;
    std::cin >> n;
    
    ll ans = 0;
    ll p = 0;
    ll q = 0;
    for (int i = 0; i < n; i++) {
        int x;
        std::cin >> x;
        if (x == 1) {
            p += 1;
            q += 1;
        } else if (x == 2) {
            p *= 2;
        } else {
            ans += p - q;
        }
    }
    std::cout << ans << "\n";

    
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
        delete s; 

        }
    return 0;
}