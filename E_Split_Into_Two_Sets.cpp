#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
    void dfs(ll node,ll color,vector<set<ll>>&adj,vector<ll>&vis,ll &biPartite){
    vis[node]=color;
    for(auto it:adj[node]){
        if(vis[it]==-1){
            dfs(it,1-color,adj,vis,biPartite);
        }
        else if(vis[it]==color){
            biPartite=0;
        }
    }

    

}
void solve() {
    ll n;
    cin>>n;
    vector<set<ll>>adj(n+1);
    vector<ll>vis(n+1,-1);
    vector<ll>count(n+1,0);

    ll chck=0;
    for(ll i=1;i<=n;i++){
        ll x,y;
        cin>>x>>y;
        count[x]++;
        count[y]++;
        if(count[x]>2||count[y]>2){
            
            
            chck=1;
        }
        adj[y].insert(x);
        adj[x].insert(y);
    }
    if(chck){
        cout<<"NO"<<endl;
        return;
    }
    for(ll i=1;i<=n;i++){
        if(vis[i]==-1){
            ll biP=1;
            dfs(i,1,adj,vis,biP);
            if(!biP){
                //cout<<i;
                cout<<"NO"<<endl;
                return;
            }
        }
    }
    cout<<"YES"<<endl;
    
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