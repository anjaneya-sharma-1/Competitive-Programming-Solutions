#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
void dfs(ll u,ll p,ll count,ll &ans,vector<vector<ll>>&adj,vector<ll>&a,ll m){
    ll num=0;
    if(a[u]==1){
        count++;
    }
    else{
        count=0;
    }
   
    if(count>m){
        return;
    }
    for(auto v:adj[u]){
        if(v==p){
            continue;
        }
        dfs(v,u,count,ans,adj,a,m);
        num++;
    }
    if(num==0){
        ans++;
    }
}
void solve() {
    ll n,m;
    cin>>n>>m;
    vector<ll>a(n+1);
    for(ll i=1;i<=n;i++){
        cin>>a[i];
    }
    vector<vector<ll>>adj(n+1);
    for(ll i=0;i<n-1;i++){
        ll u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    ll count=0;
    dfs(1,0,0,count,adj,a,m);
    cout<<count<<endl;
    
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