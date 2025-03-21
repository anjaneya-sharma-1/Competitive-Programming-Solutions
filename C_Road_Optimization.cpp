#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
void solve() {
    ll n,l,k;
    cin>>n>>l>>k;
    vector<ll>pos(n+1);
    vector<ll>val(n);
    for(int i=0;i<n;i++){
        cin>>pos[i];
  
    }
    pos[n]=l;
    for(int i=0;i<n;i++){
        cin>>val[i];
    }
   
    vector<vector<ll>>dp(n+1,vector<ll>(k+1,LLONG_MAX));
    
    dp[n][0]=0;
    for(int i=n-1;i>=0;i--){
        for(int j=0;j<=k;j++){
            if(dp[i+1][j]!=LLONG_MAX)dp[i][j]=dp[i+1][j]+val[i]*(pos[i+1]-pos[i]);
            for(int k=i+1;k<=n;k++){
                if(k-i-1<=j){
                    if(dp[k][j-(k-i-1)]!=LLONG_MAX){
                    dp[i][j]=min(dp[i][j],dp[k][j-(k-i-1)]+val[i]*(pos[k]-pos[i]));}
                }
            }
        }
    }
    ll ans=dp[0][k];
    for(int i=0;i<=k;i++){
        if(dp[0][i]!=LLONG_MAX){
            ans=min(ans,dp[0][i]);
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
      

        }
    return 0;
}