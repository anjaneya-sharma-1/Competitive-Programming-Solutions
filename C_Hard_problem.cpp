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
    vector<ll> a(n);
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    vector<string> s(n);
    for(ll i=0;i<n;i++){
        cin>>s[i];
    }
    vector<vector<ll>> dp(n+1,vector<ll>(2,1e18));
    dp[0][0]=0;
    dp[0][1]=0;
    dp[1][0]=0;
    dp[1][1]=a[0];
    for(ll i=2;i<=n;i++){
        if(s[i-1]>=s[i-2]){
            dp[i][0]=min(dp[i][0],dp[i-1][0]);
        }
        string rev = s[i-1];
        reverse(rev.begin(),rev.end());
        string prevrev = s[i-2];
        reverse(prevrev.begin(),prevrev.end());
        if(s[i-1]>=prevrev){
            dp[i][0]=min(dp[i][0],dp[i-1][1]);
        }
        if(rev>=s[i-2]){
            dp[i][1]=min(dp[i][1],dp[i-1][0]+a[i-1]);
        }
        if(rev>=prevrev){
            dp[i][1]=min(dp[i][1],dp[i-1][1]+a[i-1]);
        }
    }
    ll ans=min(dp[n][0],dp[n][1]);
    if(ans==1e18){
        cout<<-1;
    }
    else{
        cout<<ans;
    }
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