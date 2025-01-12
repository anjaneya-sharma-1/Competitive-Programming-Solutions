#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
void solve() {
    ll n;
    string s;
    cin>>n;
    cin>>s;
    vector<ll>pref(n+1,0);
    for(ll i=1;i<=n;i++){
        pref[i]=pref[i-1]+(s[i-1]-'0');
    }
    unordered_map<ll,ll>mp;
    mp[0]=1;
    ll ans=0;
    for(ll i=1;i<=n;i++){
        ans+=mp[pref[i]-i];
        mp[pref[i]-i]++;
    }
    cout<<ans<<endl;    
}

};
int main(){
    ll t;
    cin >> t;
  
    
    while (t--){ 
        Solution* s = new Solution(); 
        s->solve();
        delete s; 

        }
    return 0;
}