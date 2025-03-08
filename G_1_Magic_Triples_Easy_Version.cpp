#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 10000000
#define MOD 1000000007
class Solution{
    vector<ll>mp;
    public:
    Solution(){
        mp.resize(N+1,0);
    }
    
void solve() {
    ll n;
    cin>>n;
    vector<ll>a(n);
    ll ans=0;
  
    ll maxi=0;
    for(ll i=0;i<n;i++){
        cin>>a[i];
      
        maxi=max(maxi,a[i]);
    }
   
    for(ll i=0;i<n;i++){
        mp[a[i]]++;
    }
    for(ll i=0;i<n;i++){
        
        for(ll j=2;j*j*a[i]<=maxi;j++){
            ans+=mp[j*a[i]]*mp[j*j*a[i]];
        }
        ans+=(mp[a[i]]-1)*(mp[a[i]]-2);
       
    }
    for(ll i=0;i<n;i++){
        mp[a[i]]--;
    }
    cout<<ans<<endl;
    
}

};
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    ll t;
    cin >> t;
    
    Solution* s = new Solution(); 
    while (t--){ 
        
        s->solve();
       

        }
    return 0;
}