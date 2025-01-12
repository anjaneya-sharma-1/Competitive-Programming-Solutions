#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
void dfs(ll node,ll parent,vector<set<ll>>&adj,vector<ll>&vis,ll &cycleDetected){
    vis[node]=1;
    //cout<<node<<" ";
    for(auto it:adj[node]){
        if(!vis[it]){
            //cout<<it<<"-"<<node<<endl;
            dfs(it,node,adj,vis,cycleDetected);
        }
        else if(it!=parent){
            //cout<<it<<"-"<<parent<<endl;
            cycleDetected=1;
        }
    }

}
void solve() {
    ll n;
    cin>>n;
    vector<ll> a(n+1);
    for(ll i=1;i<=n;i++){
        cin>>a[i];
    }
    vector<set<ll>>adj(n+1);
    for(ll i=1;i<=n;i++){
        adj[i].insert(a[i]);
        adj[a[i]].insert(i);
    }
    vector<ll>vis(n+1,0);
    ll closed=0;
    ll count=0;
    ll notClosed=0;
    for(int i=1;i<=n;i++){
        if(!vis[i]){
            ll cycleDetected=0;
            dfs(i,-1,adj,vis,cycleDetected);
            if(cycleDetected){
                closed++;
            }
            else{
                notClosed++;
            }
            count++;
        }
    }
    cout<<closed+(notClosed>0?1:0)<<" "<<count<<endl;
    
}

};
int main(){
    ll t;
    cin >> t;
    
    while (t--){ 
        Solution* s = new Solution(); 
        s->solve();
        delete s; 

        }
    return 0;
}