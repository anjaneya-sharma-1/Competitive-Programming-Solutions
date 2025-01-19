#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
    map<ll,vector<ll>>mp;
    void bdfs(vector<vector<ll>>&b,vector<ll>&col,ll u,ll c){
        col[u]=c;
        mp[c].push_back(u);
        for(auto x:b[u]){
            if(col[x]==-1){
                bdfs(b,col,x,c);
            }
        }
    }
    void adfs(vector<vector<ll>>&a,vector<ll>&col,ll u,vector<ll>&vis,set<pair<ll,ll>>&s){
        vis[u]=1;
        for(auto x:a[u]){
            if(col[x]==col[u]&&col[x]!=-1){
               ll u1=min(u,x);
                ll u2=max(u,x);
                s.insert({u1,u2}); 
            }
            if(vis[x]==0){
                adfs(a,col,x,vis,s);
            }
        }
    }
    void a2dfs(vector<vector<ll>>&a,vector<ll>&col,ll u,vector<ll>&vis,ll c){
        vis[u]=1;
        for(auto x:a[u]){
            if(col[x]==c){
                if(vis[x]==0){
                    a2dfs(a,col,x,vis,c);
                }
            }
        }
        
    }

void solve() {
    ll n,m1,m2;
    cin>>n>>m1>>m2;
    vector<vector<ll>>a(n+1);
    vector<vector<ll>>b(n+1);
    for(int i=0;i<m1;i++){
        ll u,v;
        cin>>u>>v;
        a[u].push_back(v);
        a[v].push_back(u);
    }
    for(int i=0;i<m2;i++){
        ll u,v;
        cin>>u>>v;
        b[u].push_back(v);
        b[v].push_back(u);
    }
    vector<ll>col(n+1,-1);
    for(int i=1;i<=n;i++){
        if(col[i]==-1&&b[i].size()>0){
            bdfs(b,col,i,i);
        }
    }
    set<pair<ll,ll>>s;
    vector<ll>vis(n+1,0);
    for(int i=1;i<=n;i++){
        if(vis[i]==0&&a[i].size()>0){
            adfs(a,col,i,vis,s);
        }
    }
    ll ans=m1-s.size();
    vector<ll>vis2(n+1,0);
    for(auto x:mp){
        ll count=0;
        for(auto y:x.second){
            if(vis2[y]==0){
                count++;
                a2dfs(a,col,y,vis2,x.first);
            }
        }
        ans+=max(0LL,count-1);
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