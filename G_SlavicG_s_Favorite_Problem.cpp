#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
    ll check=0;
    void adfs(vector<vector<pair<ll,ll>>>&adj,ll node,ll parent,ll d,map<ll,ll>&mp,ll b){
        if(node!=b)mp[d]++;
        if(node==b&&d==0)check=1;
        if(node==b){
            return;
        }
        for(auto edge:adj[node]){
            if(edge.first!=parent){
                adfs(adj,edge.first,node,d^edge.second,mp,b);
            }
        }
    }
    void bdfs(vector<vector<pair<ll,ll>>>&adj,ll node,ll parent,ll d,map<ll,ll>&mp){
        if(parent!=-1)mp[d]++;
        for(auto edge:adj[node]){
            if(edge.first!=parent){
                bdfs(adj,edge.first,node,d^edge.second,mp);
            }
        }
    }
void solve() {
    ll n,a,b;
    cin>>n>>a>>b;
    vector<vector<pair<ll,ll>>>adj(n+1);
    for(int i=0;i<n-1;i++){
        ll u,v,w;
        cin>>u>>v>>w;
        adj[u].push_back({v,w});
        adj[v].push_back({u,w});
    }
    map<ll,ll>mp;
    map<ll,ll>mp2;
    adfs(adj,a,-1,0,mp,b);
    bdfs(adj,b,-1,0,mp2);
    if(check){
        cout<<"YES"<<endl;
        return;
    }
    for(auto it:mp){
        if(mp2[it.first]){
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;



    
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