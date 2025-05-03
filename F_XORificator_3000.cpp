#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
    ll xor_upto(ll x) {
        // XOR of all numbers from 0 to x
        if (x % 4 == 0) return x;
        if (x % 4 == 1) return 1;
        if (x % 4 == 2) return x + 1;
        return 0;
    }
     
    ll get(ll k, int i, ll r) {
        ll step = 1LL << i; // 2^i
        ll max_j = (r - k) / step; // Maximum j such that k + j * 2^i <= r
        ll u = (max_j % 2 ? 0 : k) * (r >= k);
        ll v = xor_upto(max_j) << i;
     
        // XOR of all numbers from start to end
        return xor_upto(r) ^ u ^ v;
    }
    
void solve() {
    ll l, r, i, k;
    cin >> l >> r >> i >> k;
 
    cout << (get(k, i, r) ^ get(k, i, l - 1)) << "\n";
    
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