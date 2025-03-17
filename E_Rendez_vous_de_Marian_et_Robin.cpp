#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
void solve() {
    ll n,m,h;
    cin>>n>>m>>h;
    vector<ll>mp(n+1,0);
    for(int i=0;i<h;i++){
        ll x;
        cin>>x;
        mp[x]=1;
    }
    vector<vector<pair<ll,ll>>>adj(n+1);
    for(int i=0;i<m;i++){
        ll u,v,w;
        cin>>u>>v>>w;
        adj[u].push_back({v,w});
        adj[v].push_back({u,w});
    }
    vector<vector<ll>>dist1(n+1,vector<ll>(2,LLONG_MAX));
    dist1[1]={0,(mp[1]?0:LLONG_MAX)};
    priority_queue<pair<ll,pair<ll,ll>>,vector<pair<ll,pair<ll,ll>>>,greater<>>q;
    q.push({0,{1,mp[1]}});
    while(!q.empty()){
        auto temp=q.top();
        q.pop();
        ll d=temp.first;
        ll node=temp.second.first;
        ll flag=temp.second.second;
        if (d > dist1[node][flag]) continue;
        for(auto it:adj[node]){
            ll v=it.first;
            ll w=it.second;
            if(flag==1){
                if(dist1[v][1]>d+w/2){
                    dist1[v][1]=d+w/2;
                    q.push({d+w/2,{v,1}});
                }
            }
            else{
                if(dist1[v][0]>d+w){
                    dist1[v][0]=d+w;
                    q.push({d+w,{v,mp[v]}});
                }
            }
        }
    }
    if(dist1[n][0]==LLONG_MAX&&dist1[n][1]==LLONG_MAX){
        cout<<-1<<endl;
        return;
    }
    vector<vector<ll>>dist2(n+1,vector<ll>(2,LLONG_MAX));
    dist2[n]={0,(mp[n]?0:LLONG_MAX)};
    q.push({0,{n,mp[n]}});
    while(!q.empty()){
        auto temp=q.top();
        q.pop();
        ll d=temp.first;
        ll node=temp.second.first;  
        ll flag=temp.second.second;
        if (d > dist2[node][flag]) continue;
        for(auto it:adj[node]){
            ll v=it.first;
            ll w=it.second;
            if(flag==1){
                if(dist2[v][1]>d+w/2){
                    dist2[v][1]=d+w/2;
                    q.push({d+w/2,{v,1}});
                }
            }
            else{
                if(dist2[v][0]>d+w){
                    dist2[v][0]=d+w;
                    q.push({d+w,{v,mp[v]}});
                }
            }
        }
    }
    
    ll ans=LLONG_MAX;
    for(int i=1;i<=n;i++){
        ans=min(ans,max(min(dist1[i][0],dist1[i][1]),min(dist2[i][0],dist2[i][1])));
    }
    //cout<<dist1[n][1];
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