#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
ll fastPow(ll a,ll b){
    ll res=1;
    while(b>0){
        if(b%2==1){
            res=(res*a)%MOD;
        }
        a=(a*a)%MOD;
        b/=2;
    }
    return res;
}
ll nCr(ll n,ll r){
    ll res=1;
    for(int i=0;i<r;i++){
        res=(res*(n-i))%MOD;
        res=(res*fastPow(i+1,MOD-2))%MOD;
    }
    return res;
}
bool isPrime(ll n){
    if(n==1){
        return false;
    }
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
void solve() {
    ll n,k;
    cin>>n>>k;
    ll ans=1;
    for(int i=2;i<=n/2;i++){
        if(isPrime(i)){
            ans=(ans+(nCr(n/i,k))%MOD)%MOD;
        }
    }
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