#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
    ll dfs(ll u,ll p,vector<vector<ll>>&adj,ll mid,ll &count){
        ll sum=1;
        for(auto v:adj[u]){
            if(v==p){
                continue;
            }
            sum+=dfs(v,u,adj,mid,count);
        }
        if(sum>=mid){
            count++;
            return 0;
        }
        return sum;
    }
void solve() {
    ll n,k;
    cin>>n>>k;
    vector<vector<ll>>adj(n+1);
    for(int i=0;i<n-1;i++){
        ll u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    ll l=0;
    ll r=n;
    ll ans=0;
    while(l<=r){
        ll mid=(l+r)/2;
        ll count=0;
        ll tot=dfs(1,-1,adj,mid,count);
        count--;
        if((count>=k)){
            ans=mid;
            l=mid+1;
        }
        else{
            r=mid-1;
        }
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