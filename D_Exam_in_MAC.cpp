#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007

class Solution{
    public:
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
    ll n,c;
    cin>>n>>c;
    vector<ll> a(n);
    ll even=0;

    for(ll i=0;i<n;i++){
        cin>>a[i];
        if(a[i]%2==0){
            even++;
        }
    }
    ll tot=0;
    for(ll i=0;i<n;i++){
        tot+=(a[i]/2)+1;
    }
    for(ll i=0;i<n;i++){
        tot+=(c-a[i])+1;
    }
    ll ans=-tot;
    ans+=((c+1)*(c+2)/2);
    ans+=(even*(even+1)/2);
    ans+=((n-even)*(n-even+1)/2);
    cout<<ans<<endl;

    
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