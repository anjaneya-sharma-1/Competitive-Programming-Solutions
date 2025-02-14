#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
    map<ll,vector<ll>>m;
    map<ll,ll>count;
    ll dfs(ll u,ll p,vector<vector<ll>>&a,vector<ll>&col,vector<ll>&sub,vector<ll>&leaf,vector<ll>&dist,vector<ll>&s){
        sub[u]=0;
        if(p!=1&&p!=0){
            col[u]=col[p];
            count[col[u]]++;
        }
        for(auto v:a[u]){
            if(v==p){
                continue;
            }
            dist[v]=dist[u]+1;
            sub[u]+=dfs(v,u,a,col,sub,leaf,dist,s);
        }
        if(sub[u]==0){
            leaf[u]=1;
            s.push_back(dist[u]);
        }
        m[dist[u]].push_back(sub[u]);
        return sub[u]+1;
    }
    
void solve() {
    ll n;
    cin>>n;
    vector<vector<ll>>a(n+1);
    for(ll i=0;i<n-1;i++){
        ll u,v;
        cin>>u>>v;
        a[u].push_back(v);
        a[v].push_back(u);
    }
    
    vector<ll>sub(n+1);
    vector<ll>leaf(n+1);
    vector<ll>s;
    vector<ll>dist(n+1);
    vector<ll>col(n+1);
    ll c=1;
  
    for(auto x:a[1]){
        col[x]=c++;
        count[col[x]]++;
    }
    dist[1]=0;
    dfs(1,0,a,col,sub,leaf,dist,s);
    ll ans=INT_MAX;
    set<ll>d;
    for(ll i=1;i<=n;i++){
        if(leaf[i]){
            d.insert(dist[i]);
        }
    }
    for(auto i:d){
        ll tot=0;
        for(auto j:m[i]){
            tot+=j;
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
        delete s; 

        }
    return 0;
}