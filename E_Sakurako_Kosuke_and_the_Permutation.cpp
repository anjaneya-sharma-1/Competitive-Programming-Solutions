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
    vector<ll> v(n+1);
    for(ll i =1;i<=n;i++){
        ll curr;
        cin>>curr;
        v[i]=curr;
    }
    vector<ll>vis(n+1,0);
    ll ans=0;
    for(ll i =1;i<=n;i++){
        if(!vis[v[i]]){
            vis[v[i]]=1;
            ll elem = v[i];
            ll count=0;
            while(elem!=i){
                elem=v[elem];
                vis[elem]=1;
                count++;
            }
            ans+=count/2;
            
            }
    }
    cout<<ans<<endl;
    
}

};
int main(){
    ll t;
    cin >> t;
    Solution s;
    while (t--) s.solve();
    return 0;
}