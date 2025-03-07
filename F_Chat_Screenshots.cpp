#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:

    bool cycle(ll u,vector<set<ll>>&adj,vector<ll>&vis){
        vis[u]=1;
        for(auto x:adj[u]){
            if(vis[x]==1){
                return true;
            }
            if(vis[x]==0&&cycle(x,adj,vis)){
                return true;
            }
        }
        vis[u]=2;
        return false;
    }
void solve() {
    ll n,k;
    cin>>n>>k;
    vector<set<ll>>adj(n+1);
    vector<ll>vis(n+1);
    while(k--){
        ll prev=-1;
        for(ll i=0;i<n;i++){
            ll x;
            cin>>x;
            if(i==0){
                continue;
            }
            if(prev!=-1){
                adj[prev].insert(x);
            }
            prev=x;
        }

    }
    for(ll i=1;i<=n;i++){
        if(vis[i]==0&&cycle(i,adj,vis)){
            cout<<"NO\n";
            return;
        }
    }    
    cout<<"YES\n";
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