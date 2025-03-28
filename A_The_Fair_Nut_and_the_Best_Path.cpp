#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
    ll maxi=INT_MIN;
    ll dfs(ll curr,ll pa, vector<vector<pair<ll,ll>>>&adj,vector<ll>&val,vector<ll>&mval){
        ll cmaxi=val[curr];
        ll first=0;
        ll second=0;
        for(auto x:adj[curr]){
            ll u=x.first;
            ll c=x.second;
            if(u==pa)continue;
            ll cost=val[curr]-c+dfs(u,curr,adj,val,mval);
            cmaxi=max(cmaxi,cost);
            if(cost>first){
                second=first;
                first=cost;
            }
            else if(cost>second){
                second=cost;
            }
            
        }
        maxi=max(cmaxi,maxi);
        maxi=max(first+second-val[curr],maxi);
        return cmaxi;
    }
void solve() {
    ll n;
    cin>>n;
    vector<vector<pair<ll,ll>>>adj(n+1);
    vector<ll>val(n+1);
    vector<ll>mval(n+1,0);
    for(int i=1;i<=n;i++){
        cin>>val[i];
    }
    for(int i=0;i<n-1;i++){
        ll u,v,c;
        cin>>u>>v>>c;
        adj[u].push_back({v,c});
        adj[v].push_back({u,c});
    }
    dfs(1,0,adj,val,mval);

    
    cout<<maxi<<endl;

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