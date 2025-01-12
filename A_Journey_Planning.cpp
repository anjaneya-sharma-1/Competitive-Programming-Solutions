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
    vector<ll>v(n+1);
    for(int i=0;i<n;i++){
        ll a;
        cin>>a;
        v[i+1]=(a);
    }
    unordered_map<ll,ll>mp;
    for(int i=1;i<=n;i++){
        mp[i-v[i]]+=v[i];
    }
    ll ans=0;
    for(auto x:mp){
        ans=max(ans,x.second);
    }
    cout<<ans<<endl;
    
}

};
int main(){
    ll t=1;
    
    while (t--){ 
        Solution* s = new Solution(); 
        s->solve();
        delete s; 

        }
    return 0;
}