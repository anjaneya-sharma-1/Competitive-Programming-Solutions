#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
void solve() {
    ll m,n;
    cin>>m>>n;
    vector<string> v(m);
    for(ll i=0;i<m;i++){
        cin>>v[i];
    }
    ll ans=0;
    map<ll,ll>mp;
    for(ll i=0;i<n;i++){
        ll ok=1;
        for(ll j=1;j<m;j++){
            
            if(v[j][i]<v[j-1][i]&&mp[j]==0){
                ans++;
                ok=0;
                break;
            }
        }
        if(ok){
            for(ll j=0;j<m-1;j++){
                if(v[j][i]<v[j+1][i]){
                    mp[j+1] =1;
                }
                
            }
        }
    }
    cout<<ans<<endl;
    
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