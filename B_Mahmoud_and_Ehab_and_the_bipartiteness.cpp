#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
    ll c1=0;
    void dfs(ll node,vector<vector<ll>>&adj,vector<ll>&color,vector<ll>&vis,ll c){
        vis[node]=1;
        color[node]=c;
        if(c==0){
            c1++;
        }
        for(auto x:adj[node]){
            if(!vis[x]){
                dfs(x,adj,color,vis,1-c);
            }
        }
    }
void solve() {
    ll n;
    cin>>n;
    vector<vector<ll>>adj(n+1);
    for(int i=0;i<n-1;i++){
        ll u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<ll>color(n+1,-1);
    vector<ll>vis(n+1,0);
    dfs(1,adj,color,vis,0);
    ll ans=0;
    for(int i=1;i<=n;i++){
        if(color[i]==0){
            
            ans+=(n-c1-adj[i].size());
        }
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