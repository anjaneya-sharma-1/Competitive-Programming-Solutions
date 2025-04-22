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
    vector<ll>a(n+1);
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    vector<vector<ll>>adj(n+1);
    for(int i=0;i<n-1;i++){
        ll u , v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    
    
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
      

        }
    return 0;
}