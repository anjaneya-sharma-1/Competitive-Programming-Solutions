#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 998244353
class Solution{
    public:
void solve() {
    ll n;
    cin>>n;
    vector<ll>a(n+1);
    for(ll i=1;i<=n;i++){
        cin>>a[i];
    }
    
    vector<vector<pair<ll,ll>>>dp(32,vector<pair<ll,ll>>(4,{0,0}));
    ll ans=0;
    ll xxor=0;
    for(ll i=1;i<=n;i++){
        xxor^=a[i];
        for(ll j=0;j<32;j++){
            
            if((a[i]&(1<<j))&&(xxor&(1<<j))){
                dp[j][1].first=(dp[j][1].first+i-1)%MOD;
                dp[j][1].second=(dp[j][1].second+1)%MOD;
            }
            else if((a[i]&(1<<j))&&!(xxor&(1<<j))){
                dp[j][3].first=(dp[j][3].first+i-1)%MOD;
                dp[j][3].second=(dp[j][3].second+1)%MOD;
                
            }
            else if(!(a[i]&(1<<j))&&(xxor&(1<<j))){
                dp[j][2].first=(dp[j][2].first+i-1)%MOD;
                dp[j][2].second=(dp[j][2].second+1)%MOD;
            }
            else{
                dp[j][0].first=(dp[j][0].first+i-1)%MOD;
                dp[j][0].second=(dp[j][0].second+1)%MOD;
            }
            if(xxor&(1<<j)){
                ll term1 = ((i*dp[j][0].second)%MOD - dp[j][0].first%MOD + MOD)%MOD;
                ll term2 = (term1 * (1LL<<j))%MOD;
                ans=(ans+term2)%MOD;
                
                ll term3 = ((i*dp[j][1].second)%MOD - dp[j][1].first%MOD + MOD)%MOD;
                ll term4 = (term3 * (1LL<<j))%MOD;
                ans=(ans+term4)%MOD;
            }
            else{
                ll term1 = ((i*dp[j][2].second)%MOD - dp[j][2].first%MOD + MOD)%MOD;
                ll term2 = (term1 * (1LL<<j))%MOD;
                ans=(ans+term2)%MOD;
                
                ll term3 = ((i*dp[j][3].second)%MOD - dp[j][3].first%MOD + MOD)%MOD;
                ll term4 = (term3 * (1LL<<j))%MOD;
                ans=(ans+term4)%MOD;
            }
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