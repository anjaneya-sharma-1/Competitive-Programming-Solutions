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
    vector<ll>a(n);
    map<ll,ll>mp;   
    for(ll i=0;i<n;i++){
        cin>>a[i];
        mp[a[i]]++;
    }
    ll maxi=0;
    for(auto x:mp){
        maxi=max(maxi,x.second);
    }
    ll needed=n-maxi;
   
    ll ans=0;
    while(maxi<n){
        ll temp=min(maxi,n-maxi);
        ans+=temp+1;
        maxi+=temp;
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
      

        }
    return 0;
}