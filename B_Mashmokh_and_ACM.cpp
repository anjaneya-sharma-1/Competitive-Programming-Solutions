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
    ll ans=0;
    vector<vector<ll>>dp(n+1,vector<ll>(k+1,0));
    for(int i=1;i<=n;i++){
        dp[i][1]=1;
    }
    
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j+=i){
            for(int l=1;l<=k;l++){
                dp[j][l]=(dp[j][l]+dp[i][l-1])%MOD;
            }
            
        }
    }
    for(int i=1;i<=n;i++){
        ans=(ans+dp[i][k])%MOD;
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