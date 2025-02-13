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
    vector<ll>degree(n+1,0);
    ll maxi=0;
    ll smaxi=0;
    for(ll i=0;i<n-1;i++){
        ll u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
        degree[u]++;
        degree[v]++;
        
        
    }
    for(ll i=1;i<=n;i++){
        if(degree[i]>maxi){
            smaxi=maxi;
            maxi=degree[i];
        }else if(degree[i]>smaxi){
            smaxi=degree[i];
        }
    }
    ll count=0;
    for(ll i=1;i<=n;i++){
        if(degree[i]==smaxi){
            count++;
        }
    }
    if(smaxi==maxi){
        count--;
    }
    ll ans=maxi+smaxi;
    ll c=2;
    for(ll i=1;i<=n;i++){
        if(degree[i]==maxi){
            ll ok=1;
            ll c2=0;
            for(auto x:adj[i]){

                if(degree[x]==smaxi){
                    c2++;
                    
                }
            }
            ok=c2!=count;
            if(ok==1){
                c=1;
                break;
            }
        }
    }
    cout<<ans-c<<endl;

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