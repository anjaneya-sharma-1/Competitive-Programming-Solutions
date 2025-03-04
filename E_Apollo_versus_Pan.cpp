#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
void solve() {
    ll n;
    cin>>n;
    vector<ll> a(n);
    vector<ll>mask(61,0);
    for(ll i=0;i<n;i++){
        cin>>a[i];
        for(ll j=0;j<61;j++){
            if(a[i]&(1LL<<j)){
                mask[j]++;
            }
        }
    }
    ll ans=0;
    for(ll i=0;i<n;i++){
        
        ll x=0;
        ll y=(((a[i])%MOD)*n)%MOD;
        for(ll j=0;j<61;j++){
            if(a[i]&(1LL<<j)){
               
                x+=(((1LL<<j)%MOD)*mask[j])%MOD;
                x%=MOD;
            }
            else{
                y+=(((1LL<<j)%MOD)*mask[j])%MOD;
                y%=MOD;
            }
        }
        ans+=(x*y)%MOD;
        ans%=MOD;
    }
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