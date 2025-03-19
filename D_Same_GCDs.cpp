#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
void solve() {
    ll a,m;
    cin>>a>>m;
    ll g=__gcd(a,m);
    ll ans=m/g;
    ans-=a/g;
    m/=g;
    

    for(ll i=1;i*i<=m;i++){
        if(m%i==0){
            ll x=i;
            ll y=m/i;
            if(x>=a){
                ans=max(ans,m/x);
            }
            if(y>=a){
                ans=max(ans,m/y);
            }
        }
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