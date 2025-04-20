#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
    ll dfs(vector<ll>&sub,ll u, ll pa,vector<vector<ll>>&adj){
        ll sz=1;
        for(auto v:adj[u]){
            if(v==pa)continue;
            sz+=dfs(sub,v,u,adj);
        }
        sub[u]=sz;
        return sz;
    }
void solve() {
    ll n;
    cin>>n;
    vector<vector<ll>>adj(n+1);
    vector<ll>sub(n+1);
    vector<vector<ll>>edges;
    for(int i=0;i<n-1;i++){
        ll u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
        edges.push_back({v,u});
    }
    ll m;
    cin>>m;
    vector<ll>val(m);
    for(int i =0;i<m;i++){
        cin>>val[i];
    }
    sort(val.begin(),val.end(),greater());
    dfs(sub,1,-1,adj);
    ll free=0;
    if(m>edges.size()){
        free=m-edges.size();
    }
    ll l=0;
    ll ans=0;
    vector<ll>muls;
    for(int i=0;i<edges.size();i++){
        ll u=edges[i][0];
        ll v=edges[i][1];
        ll mini=min(sub[u],sub[v]);
        ll mul=((mini)*((n-mini)));
        muls.push_back(mul);
    }
    sort(muls.begin(),muls.end(),greater());
    for(int i=0;i<muls.size();i++){
        ll mul=muls[i];
        ll tot=0;
        if(l<m){
            tot=((mul%MOD)*(val[l++]%MOD))%MOD;
        }
        else{
            tot=mul;
        }
        while(l<m&&free>0){
            tot=(((tot)%MOD)*(val[l++]%MOD))%MOD;
            free--;
        }
        ans=(ans+tot)%MOD;
    }
    cout<<ans<<endl;


    
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
      

        }
    return 0;
}