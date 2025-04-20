#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

#define ll long long
#define N 1000000
#define MOD 1000000007
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update> 
using namespace std;
class Solution{
    public:
    ordered_set st;
    ll dfs(vector<ll>&sub,ll u, ll pa,vector<vector<ll>>&adj){
        ll sz=1;
        for(auto v:adj[u]){
            if(v==pa)continue;
            sz+=dfs(sub,v,u,adj);
        }
        sub[u]=sz;
        return sz;
    }
    void dfs2(ll u,vector<vector<ll>>&adj,vector<ll>&c,vector<ll>&a){
        a[u]=*st.find_by_order(c[u]);
        st.erase(a[u]);
        for(auto v:adj[u]){
            dfs2(v,adj,c,a);
        }
    }
void solve() {
    ll n;
    cin>>n;
    vector<ll>c(n+1);
    vector<vector<ll>>adj(n+1);
    vector<ll>sub(n+1);
    ll root;
    for(int i=1;i<=n;i++){
        ll pa;
        cin>>pa>>c[i];
        if(pa!=0){
            adj[pa].push_back(i);
        }
        else{
            root=i;
        }
    }
    dfs(sub,root,-1,adj);
    for(int i=1;i<=n;i++){
        if(sub[i]-1<c[i]){
            cout<<"NO"<<endl;
            return;
        }
    }
    vector<ll>a(n+1);

    for(int i=1;i<=n;i++){
        st.insert(i);
    }
    dfs2(root,adj,c,a);
    cout<<"YES"<<endl;

    for(int i=1;i<=n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    
    
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