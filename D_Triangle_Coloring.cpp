#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 998244353
class Solution{
    public:
    // Time Complexity = O(nlogp) where p = MOD
// Space Complexity = O(n) or O(1) depending upon implementation
 

 
unsigned long long power(unsigned long long x, 
                                  int y, int p)
{
    unsigned long long res = 1; // Initialize result
  
    x = x % p; // Update x if it is more than or
    // equal to p
  
    while (y > 0) 
    {
      
        // If y is odd, multiply x with result
        if (y & 1)
            res = (res * x) % p;
  
        // y must be even now
        y = y >> 1; // y = y/2
        x = (x * x) % p;
    }
    return res;
}
  
// Returns n^(-1) mod p
unsigned long long modInverse(unsigned long long n,  
                                            int p)
{
    return power(n, p - 2, p);
}
  
// Returns nCr % p using Fermat's little
// theorem.

    unsigned long long nCrModPFermat(unsigned long long n,
                                 int r, int p)
{
    // If n<r, then nCr should return 0
    if (n < r)
        return 0;
    // Base case
    if (r == 0)
        return 1;
  
    // Fill factorial array so that we
    // can find all factorial of r, n
    // and n-r
    unsigned long long fac[n + 1];
    fac[0] = 1;
    for (int i = 1; i <= n; i++)
        fac[i] = (fac[i - 1] * i) % p;
  
    return (fac[n] * modInverse(fac[r], p) % p
            * modInverse(fac[n - r], p) % p)
           % p;
}
void solve() {
    ll n;
    cin>>n;
    vector<ll> v;
    for(ll i=0;i<n;i++){
        ll a;
        cin>>a;
        v.push_back(a);
    }
    ll x=1;
    for(ll i=0;i<n;i+=3){
        ll temp=0;
        ll mini=*min_element(v.begin()+i,v.begin()+i+3);
        for(ll j=i;j<i+3;j++){
            if(v[j]==mini){
                temp++;
            }
           
        }
        x=(x*temp)%MOD;
    }
    ll ans=nCrModPFermat(n/3,n/6,MOD);
    ans=(ans*x)%MOD;
    cout<<ans<<endl;

    
}

};
int main(){
    ll t=1;

    
    while (t--){ 
        Solution* s = new Solution(); 
        s->solve();
        delete s; 

        }
    return 0;
}