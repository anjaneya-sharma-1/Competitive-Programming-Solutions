#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
    vector<vector<ll>>adj;
    vector<vector<ll>>capacity;
    ll bfs(ll u, vector<ll>&parent){
        fill(parent.begin(),parent.end(),-1);
        queue<pair<ll,ll>>q;
        q.push({1,LLONG_MAX});
        parent[1]=-2;
        while(!q.empty()){
            ll curr=q.front().first;
            ll flow=q.front().second;
            q.pop();
            for(auto x:adj[curr]){
                if(parent[x]==-1&&capacity[curr][x]){
                    parent[x]=curr;
                    q.push({x,min(flow,capacity[curr][x])});
                    if(x==parent.size()-1){
                        return min(flow,capacity[curr][x]);
                    }
                }
                
            }
        }
        return 0;
    }
void solve() {
    ll n,m;
    cin>>n>>m;
    adj.resize(n+1);
    capacity.resize(n+1,vector<ll>(n+1,0));
    for(ll i=0;i<m;i++){
        ll a,b,c;
        cin>>a>>b>>c;
        capacity[a][b]+=c;
        capacity[b][a]+=0;
        adj[a].push_back(b);
        adj[b].push_back(a);

    }
    vector<ll>parent(n+1);
    ll flow=0;
    ll new_flow=0;
    while(new_flow=bfs(1,parent)){
        flow+=new_flow;
        ll curr=n;
        while(curr!=1){
            ll prev=parent[curr];
            capacity[prev][curr]-=new_flow;
            capacity[curr][prev]+=new_flow;
            curr=prev;
        }
    }
    cout<<flow;


    
    
}

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