#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
    void dparent(ll u,ll p,vector<ll>&pa,vector<vector<pair<ll,ll>>>&adj){
        pa[u]=p;
        for(auto v:adj[u]){
            if(v.first!=p){
                dparent(v.first,u,pa,adj);
            }
        }
    }
    ll dfs(ll u,ll p,ll count,vector<ll>&ans,vector<vector<pair<ll,ll>>>&adj,vector<ll>&vis,vector<ll>&pa){
        vis[u]=1;
        ll total=0;
        for(auto v:adj[u]){
            total+=(pa[u]==v.first&&v.second==2);
            if(pa[u]!=v.first||vis[v.first]){
                continue;
            }
            total+=dfs(v.first,u,count,ans,adj,vis,pa);
        }
        return total;
    }
void solve() {
    ll n;
    cin>>n;
    vector<vector<pair<ll,ll>>>adj(n+1);
    for(ll i=0;i<n-1;i++){
        ll u,v,w;
        cin>>u>>v>>w;
        adj[u].push_back({v,w});
        adj[v].push_back({u,w});
    }
    vector<ll>ans(n+1,0);
    vector<ll>p(n+1,0);
    vector<ll>vis(n+1,0);
    dparent(1,0,p,adj);
    ll count=0;
    vector<ll>res;
    for(ll i=2;i<=n;i++){
        if(adj[i].size()==1&&vis[i]==0){
            ll total=dfs(i,0,0,ans,adj,vis,p);
            if(total>0){
            count++;
            res.push_back(i);
            }
        }
    }
    cout<<count<<endl;
    for(auto it:res){
        cout<<it<<" ";
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