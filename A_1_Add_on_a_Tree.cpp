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
    vector<ll>deg(n+1);
    for(ll i=0;i<n-1;i++){
        ll u,v;
        cin>>u>>v;
        deg[u]++;
        deg[v]++;
    }
    if(n==2){
        cout<<"YES"<<endl;
        return;
    }
    
    for(ll i=1;i<=n;i++){
        if(deg[i]==2){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
    
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