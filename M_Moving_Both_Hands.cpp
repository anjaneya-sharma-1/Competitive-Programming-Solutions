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
    vector<vector<vector<ll>>>adj(n+1);
    for(int i=0;i<m;i++){
        ll u,v,w;
        cin>>u>>v>>w;
        adj[u].push_back({v,w,1});
        adj[v].push_back({u,w,0});
    }
    vector<vector<ll>>dist(n+1,vector<ll>(2,1e18));
    dist[1]={0,0};
    priority_queue<pair<ll,pair<ll,ll>>,vector<pair<ll,pair<ll,ll>>>,greater<pair<ll,pair<ll,ll>>>>pq;
    pq.push({0,{1,1}});
    while(!pq.empty()){
        auto p=pq.top();
        ll d=p.first;
        ll node=p.second.first;
        ll hand=p.second.second;
        pq.pop();
        if(d>dist[node][hand]){
            continue;
        }
        for(auto edge:adj[node]){
            if(hand==0&&edge[2]==1){
                continue;
            }
            ll v=edge[0];
            ll w=edge[1];
            ll h=edge[2];
            if(dist[v][h]>d+w){
                dist[v][h]=d+w;
                pq.push({d+w,{v,h}});
            }
        }
       
    }
    for(int i=2;i<=n;i++){
        if(dist[i][0]==1e18&&dist[i][1]==1e18){
            cout<<-1<<" ";
        }
        else{
        cout<<min(dist[i][0],dist[i][1])<<" ";
    }
}}

};
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    ll t=1;
    
    
    while (t--){ 
        Solution* s = new Solution(); 
        s->solve();
        delete s; 

        }
    return 0;
}