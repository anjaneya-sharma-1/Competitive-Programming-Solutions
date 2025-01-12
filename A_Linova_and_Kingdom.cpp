#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
    ll dfs(ll u,ll p,vector<vector<ll>>&a,vector<ll>&deg,ll depth){
        ll sum=0;
        for(auto i:a[u]){
            if(i==p){
                continue;
            }
            sum+=dfs(i,u,a,deg,depth+1);
        }
        deg[u]=sum-depth;
        return sum+1;
    }

void solve() {
    ll n,k;
    cin>>n>>k;
    vector<vector<ll>>a(n+1);
    for(ll i=1;i<n;i++){
        ll u,v;
        cin>>u>>v;
        a[v].push_back(u);
        a[u].push_back(v);
    }
    vector<ll>deg(n+1,INT_MIN);
    dfs(1,-1,a,deg,0);
    ll ans=0;
    sort(deg.begin(),deg.end(),greater<ll>());
    for(ll i=0;i<n-k;i++){
        ans+=deg[i];
    }
    cout<<ans<<endl;

    
}

};
int main(){
    ll t=1;
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    while (t--){ 
        Solution* s = new Solution(); 
        s->solve();
        delete s; 

        }
    return 0;
}