#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
void solve() {
    ll a,b,c;
    cin>>a>>b>>c;
    ll l=0;
    ll r=1e18;
    ll ans=0;
    while(l<=r){
        ll m=(l+r)/2;
        ll tot=m*3;

        if(min(a,2*m)+min(b,2*m)+min(c,2*m)>=3*m){
            ans=m;
            l=m+1;
        }
        else{
            r=m-1;
        }
    }
    
    cout<<ans<<endl;
    
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