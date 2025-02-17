#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
void solve() {
    ll n;
    cin>>n;
    vector<vector<ll>>adj(n+1);
    vector<ll>pa(n+1);
    vector<ll>perm(n);
    ll root=-1;
    for(ll i=1;i<=n;i++){
        cin>>pa[i];
        if(pa[i]==i){
            root=i;
            continue;
        }
        adj[pa[i]].push_back(i);
        
    }
    vector<ll>v(n+1,0);
    ll prev=0;
    for(ll i=0;i<n;i++){
        cin>>perm[i];
        v[perm[i]]=++prev;
    }
    for(ll i=1;i<=n;i++){
        if(v[i]<v[pa[i]]){
            cout<<-1<<endl;
            return;
        }
    }
    vector<ll>ans(n+1,0);
    priority_queue<pair<ll,ll>,vector<pair<ll,ll>>,greater<>>pq;
    vector<ll>vis(n+1,-1);
    vis[root]=0;
    for(auto x:adj[root]){
        pq.push({v[x],x});
    }
    
    ll maxi=0;
    while(!pq.empty()){
        pair<ll,ll>temp=pq.top();
        pq.pop();
        ll node=temp.second;
        ans[node]=maxi+1-vis[pa[node]];
        maxi++;
        vis[node]=maxi;
        for(auto x:adj[node]){
            pq.push({v[x],x});
        }
    }
    for(ll i=1;i<=n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    
    
    
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