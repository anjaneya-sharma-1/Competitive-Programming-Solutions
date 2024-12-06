#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
void solve() {
    ll n,k;
    cin>>n>>k;
    ll ans = n;
    for(ll i = 1;i*i<=n;i++){
        if(n%i==0){
            if(n/i<=k){
                ans=min(ans,i);
            }
            if(i<=k){
                ans=min(ans,n/i);
            }
        }
    }
    cout<<ans<<endl;
}

};
int main(){
    ll t;
    cin>>t;
    
    while (t--){ 
        Solution* s = new Solution(); 
        s->solve();
        delete s; 

        }
    return 0;
}