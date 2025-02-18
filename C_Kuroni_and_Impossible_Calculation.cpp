#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
void solve() {
    ll n,m;
    cin>>n>>m;
    vector<ll>a(n);
    for(ll i=0;i<n;i++){
        cin>>a[i];
        
        
    }
    if(n>m){
        cout<<0<<endl;
        return;
    }
    else{
        ll ans=1;
        for(ll i=0;i<n;i++){
            for(ll j=i+1;j<n;j++){
                ans=(ans*abs(a[i]-a[j])%m);
            }
        }
        cout<<ans<<endl;
    }
    
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