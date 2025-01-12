#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:

    ll dfs(vector<vector<ll>>&adj,vector<ll>&dp,ll node,ll parent,ll &ans){
        if(dp[node]!=-1){
            return dp[node];
        }
        ll sum=0;
        for(auto x:adj[node]){
            if(x!=parent){
                sum+=dfs(adj,dp,x,node,ans);
            }
        }
        if(sum%2){
            ans++;
            dp[node]=0;
            return 0;
            
        }
        else{
            dp[node]=sum+1;
            return sum+1;
        }
    }
void solve() {
    ll n;
    cin>>n;
    vector<vector<ll>>adj(n+1);
    vector<ll> vis(n+1,0);
    vector<ll>dp(n+1,-1);
    for(int i=0;i<n-1;i++){
        ll l,r;
        cin>>l>>r;
        adj[l].push_back(r);
        adj[r].push_back(l);
    }
    if(n%2){
        cout<<-1<<endl;
        return;
    }
    ll ans=0;
    ll maxi=0;
    for(int i=1;i<=n;i++){
        if(dp[i]==-1)
            {
            ans=0;
            dfs(adj,dp,i,-1,ans);
            maxi=max(maxi,ans);}
        
    }
    if(maxi==0){
        cout<<0<<endl;
    }
    else{
        cout<<maxi-1<<endl;
    }
    
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