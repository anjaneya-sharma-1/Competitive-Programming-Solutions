#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
    ll check=0;
void dfs(ll i ,vector<ll>&vis,vector<vector<vector<pair<ll,ll>>>>&adj,ll &count,ll &tot,ll val){
   vis[i]=val;
   tot++;
   if(val==2) count++;
   for(auto x:adj[i][1]){
        ll typ=x.second;
         if(vis[x.first]==0){
                dfs(x.first,vis,adj,count,tot,(typ==val)?1:2);
         }
         else if(vis[x.first]!=((typ==val)?1:2)){
                  check=1;
                  return;
         }
   }
   for(auto x:adj[i][0]){
        ll typ=x.second;
        if(val==2){
            typ=((typ==1)?2:1);
        }
       if(vis[x.first]==0){
           dfs(x.first,vis,adj,count,tot,typ);
       }
       else if(vis[x.first]!=typ){
              check=1;
              return;
       }
   }
   
}
void solve() {
    ll n,m;
    cin>>n>>m;
    vector<vector<vector<pair<ll,ll>>>>adj(n+1,vector<vector<pair<ll,ll>>>(2));
    for(int i=0;i<m;i++){
        ll x,y;
        string s;
        cin>>x>>y>>s;
        if(s=="imposter"){
            adj[x][0].push_back({y,2});
            adj[y][1].push_back({x,2});
        }
        else{
            adj[x][1].push_back({y,1});
            adj[y][0].push_back({x,1});
        }
    }
    ll ans=0;
    vector<ll>vis(n+1,0);
    for(ll i=1;i<=n;i++){
        ll count=0;
        ll tot=0;
        if(vis[i]==0){
            dfs(i,vis,adj,count,tot,2);
            if(check){
                cout<<-1<<endl;
                return;
            }
            ans+=max(count,tot-count);
        }
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