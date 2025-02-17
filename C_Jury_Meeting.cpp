#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 998244353

class Solution {
    public:
    
    ll modPow(ll base, ll exp) {
        ll result = 1;
        base %= MOD;
        while (exp > 0) {
            if (exp & 1)
                result = (result * base) % MOD;
            base = (base * base) % MOD;
            exp >>= 1;
        }
        return result;
    }
    
   
    ll modInverse(ll n) {
        return modPow(n, MOD-2);
    }
    
    void solve() {
        ll n;
        cin >> n;
        vector<ll>a(n);
        ll maxi = -1;
        for(ll i = 0; i < n; i++) {
            cin >> a[i];
            maxi = max(maxi, a[i]);
        }
        ll count1 = 0;
        ll count2 = 0;
        vector<ll>fact(n+1, 1);
        
        for(ll i = 1; i <= n; i++) {
            fact[i] = (fact[i-1] * i) % MOD;
        }
        
        for(ll i = 0; i < n; i++) {
            if(a[i] == maxi) {
                count1++;
            }
            else if(a[i] == maxi-1) {
                count2++;
            }
        }
        
        if(count1 > 1) {
            cout << fact[n] << "\n";
            return;
        }
        else if(count2 == 0) {
            cout << 0 << "\n";
            return;
        }
        else {
            ll ans = fact[n];
           
            ll inv = modInverse(count2 + 1);
            ll toSubtract = (ans * inv) % MOD;
            
            ans = ((ans - toSubtract) % MOD + MOD) % MOD;
            cout << ans << "\n";
        }
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