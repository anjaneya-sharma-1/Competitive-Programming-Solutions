#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
void solve() {
    ll n,m;
    cin>>n>>m;
    vector<vector<pair<ll,ll>>>adj(n+1);
    for(int i = 0; i < m; i++){
        ll u,v,w;
        cin>>u>>v>>w;
        adj[u].push_back({v,w});
        adj[v].push_back({u,w});

    }
    vector<ll>bike(n+1);
    for(int i = 1; i <= n; i++){
        cin>>bike[i];
    }
    map<ll,vector<ll>>mp;
    for(int i = 1; i <= n; i++){
        mp[bike[i]]=vector<ll>(n+1,1e18);
    }
    priority_queue<pair<ll,pair<ll,ll>>,vector<pair<ll,pair<ll,ll>>>,greater<pair<ll,pair<ll,ll>>>>pq;
    pq.push({0,{1,bike[1]}});
    mp[bike[1]][1]=0;
    while(!pq.empty()){
        auto x=pq.top();
        pq.pop();
        ll u=x.second.first;
        ll w=x.first;
        ll b=x.second.second;
        if(mp[b][u]<w){
            continue;
        }
        if(u==n){
            cout<<w<<endl;
            return;
        }
        for(auto y:adj[u]){
            ll v=y.first;
            ll w2=y.second;
            ll tb=min(b,bike[v]);
            if(mp[b][v]>w+(w2*b)){
                mp[b][v]=w+(w2*b);
                pq.push({w+(w2*b),{v,tb}});
            }
        }

    }
    cout<<-1<<endl;
    
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