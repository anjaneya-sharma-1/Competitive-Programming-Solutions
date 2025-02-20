#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
void solve() {
    ll num;
    cin>>num;
    map<ll,ll>mp;
    vector<ll>v;
    for(ll i=0;i<num;i++){
        ll l ,r ;
        cin>>l>>r;
        if(mp.find(l)==mp.end()){
            v.push_back(l);
            mp[l]=r;
            continue;
        }
        mp[l]=min(mp[l],r);
    }
    sort(v.begin(),v.end());
    ll n=v.size();
    
    vector<ll>dp(n+1,0);
    ll ans=0;
    dp[n]=0;
  
    for(ll i=n-1;i>=0;i--){
        dp[i]=dp[i+1];
        
        dp[i]=max(dp[i],1+dp[upper_bound(v.begin(),v.end(),mp[v[i]])-v.begin()]);
    }
    cout<<dp[0]<<endl;
    
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