#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
ll dfs(ll n,ll k,ll f,vector<vector<vector<ll>>> &dp){
    if(n==0||n>=dp.size()){
        return 1;
    }
    if(k==1){
        return 1;
    }
    if(dp[n][k][f]!=-1){
        return dp[n][k][f];
    }
    if(f==0){
        ll ans=(dfs(n-1,k,0,dp)%MOD+dfs(n+1,k-1,1,dp)%MOD)%MOD;
        dp[n][k][f]=(ans)%MOD;
        return dp[n][k][f];
    }
    else if(f==1){
        ll ans=(dfs(n+1,k,1,dp)%MOD+dfs(n-1,k-1,0,dp)%MOD)%MOD;
        dp[n][k][f]=(ans)%MOD;
        return dp[n][k][f];
    }

}
void solve() {
    ll n,k;
    cin>>n>>k;
    vector<vector<vector<ll>>>dp(n+1,vector<vector<ll>>(k+1,vector<ll>(2,-1)));
    ll ans=dfs(1,k,1,dp)%MOD;
    cout<<ans<<endl;
}

};
int main(){
    ll t;
    cin >> t;
    
    while (t--){ 
        Solution* s = new Solution(); 
        s->solve();
        delete s; 

        }
    return 0;
}