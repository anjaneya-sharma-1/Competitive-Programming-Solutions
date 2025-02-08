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
    map<ll,vector<pair<ll,ll>>>m;
    
    set<ll>s;
    for(int i=0;i<n;i++){
        ll a,b,p;
        cin>>a>>b>>p;
        m[b].push_back({a,p});
        s.insert(b);
    }
    vector<ll>v(s.begin(),s.end());
    ll maxi=v.size();
    vector<ll>dp(maxi+1,0);
    dp[0]=0;
    for(int i=1;i<=maxi;i++){
        dp[i]=dp[i-1];
        for(auto x:m[v[i-1]]){
            ll l=lower_bound(v.begin(),v.end(),x.first)-v.begin();
            if(l>=0){
            dp[i]=max(dp[i],dp[l]+x.second);
            }
            else{
                dp[i]=max(dp[i],x.second);
            }
        }
    }
    cout<<dp[maxi]<<endl;
    
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