#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
void solve() {
    ll n,k,d;
    cin>>n>>k>>d;
    vector<ll>prev(n+1,0);
    prev[0]=1;
    for(ll i=1;i<=n;i++){
        vector<ll>curr=prev;
        for(ll j=1;j<=k;j++){
            if(i-j<0||j==d){
                break;
            }
            curr[i]=(curr[i]+curr[i-j])%MOD;
        }
        prev=curr;
    }
    vector<ll>prev2(n+1,0);
    prev2[0]=1;
    for(ll i=1;i<=n;i++){
        vector<ll>curr=prev2;
        for(ll j=1;j<=k;j++){
            if(i-j<0){
                break;
            }
            curr[i]=(curr[i]+curr[i-j])%MOD;
        }
        prev2=curr;
    }
    ll ans=(prev2[n]-prev[n])%MOD;
    if(ans<0){
        ans+=MOD;
    }
    cout<<ans;

    
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