#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
    vector<ll>diff;
    ll dfs(ll u, ll p, vector<vector<ll>>&a,ll level){
        ll maxi=level;
        for(auto x:a[u]){
            if(x==p) continue;
            maxi=max(maxi,dfs(x,u,a,level+1));
        }
        diff[level]++;
        diff[maxi+1]--;
        return maxi;
    }
    
void solve() {
    ll n;
    cin>>n;
    vector<vector<ll>>a(n+1);
    for(ll i=0;i<n-1;i++){
        ll u,v;
        cin>>u>>v;
        a[u].push_back(v);
        a[v].push_back(u);
    }
    diff.resize(n+1);
    fill(diff.begin(),diff.end(),0);
    dfs(1,0,a,0);
    
    ll mini=n-diff[0];

    for(ll i=1;i<=n;i++){
        diff[i]+=diff[i-1];
        mini=min(mini,n-diff[i]);
    }
    cout<<mini<<endl;    
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