#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
    class DSU{
        public:
            vector<ll>parent;
            vector<ll> size;
            DSU(ll n){
                parent.resize(n+1);
                size.resize(n+1);
            }
            void make_set(ll v){
                parent[v]=v;
                size[v]=1;
            }
            ll find_set(ll a){
                  if(parent[a]==a){
                      return a;
                  }
                return parent[a]=find_set(parent[a]);
              }
            int union_set(ll a,ll b){
                ll pa =find_set(a);
                ll pb=find_set(b);
                if(pa==pb){
                    return 0;
                }
                else{
                    if(size[pb]>size[pa]){
                        swap(pa,pb);
                    }
                    parent[pb]=pa;
                    size[pa]+=size[pb];
                    return 1;
                }
        }
              
        };
void solve() {
    ll n,m,k;
    cin>>n>>m>>k;
    vector<vector<pair<ll,ll>>>adj(n+1);
    ll mini=LLONG_MAX;
    vector<vector<ll>>edges;
    for(int i=0;i<m;i++){
        ll u,v,w;
        cin>>u>>v>>w;
        mini=min(mini,abs(w-k));
        edges.push_back({u,v,w});
    }
 

    for(int i=0;i<edges.size();i++){
        edges[i][2]=max(0LL,edges[i][2]-k);
    }
    for(int i=0;i<edges.size();i++){
        ll u=edges[i][0];
        ll v=edges[i][1];
        ll w=edges[i][2];
        edges[i]={w,u,v};
    }
    sort(edges.begin(),edges.end());
    ll ans=0;
    DSU d(n+1);
    for(int i=1;i<=n;i++){
        d.make_set(i);
    }
    bool check=0;
    for(int i=0;i<edges.size();i++){
        ll u=edges[i][1];
        ll v=edges[i][2];
        ll w=edges[i][0];
        if(d.find_set(u)!=d.find_set(v)){
            d.union_set(u,v);
            ans+=w;
            if(w>0){
                check=1;
            }
        }
        
    }

    cout<<ans+(!check?mini:0)<<endl;
    


    
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