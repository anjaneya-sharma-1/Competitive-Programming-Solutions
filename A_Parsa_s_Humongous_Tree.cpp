#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
    ll dfs(ll u,ll parent,vector<vector<ll>>&adj,vector<vector<ll>>&val,vector<vector<ll>>&dp){
    dp[u][0]=0;
    dp[u][1]=0;
    for(auto v:adj[u]){
        if(v==parent){
            continue;
        }
        dfs(v,u,adj,val,dp);
        dp[u][0]+=max({abs(val[u][0]-val[v][0])+dp[v][0],abs(val[u][0]-val[v][1])+dp[v][1]});
        dp[u][1]+=max({abs(val[u][1]-val[v][0])+dp[v][0],abs(val[u][1]-val[v][1])+dp[v][1]});
    }
    return max(dp[u][0],dp[u][1]);
    }
void solve() {
    ll n;
    cin>>n;
    vector<vector<ll>>val(n+1,vector<ll>(2));
    for(ll i=1;i<=n;i++){
        cin>>val[i][0]>>val[i][1];
    }
    vector<vector<ll>>dp(n+1,vector<ll>(2,-1));
    vector<vector<ll>>adj(n+1);
    for(ll i=0;i<n-1;i++){
        ll u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
   
    cout<<dfs(1,-1,adj,val,dp)<<endl;
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