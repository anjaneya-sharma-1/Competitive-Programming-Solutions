#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
    vector<vector<ll>>dp;
 
      
 
void solve() {
    ll n,x;
    cin>>n>>x;
    vector<ll>c(n+1);
    vector<ll>h(n+1);
    ll maxi=0;
    for(ll i=1;i<=n;i++){
        cin>>c[i]>>h[i];
        maxi+=h[i];
    }
    c[0]=0;
    h[0]=0;
    dp = vector<vector<ll>>(n+1,vector<ll>(maxi+1,LLONG_MAX));
    for(ll i=0;i<=n;i++){
        dp[i][0]=0;
    }
    ll ans=0;
    for(ll i=1;i<=n;i++){
        for(ll j=1;j<=maxi;j++){
            dp[i][j]=dp[i-1][j];
            if(j>=h[i]&&dp[i-1][j-h[i]]!=LLONG_MAX&&(i-1)*x>=c[i]+dp[i-1][j-h[i]]){
                dp[i][j]=min(dp[i][j],c[i]+dp[i-1][j-h[i]]);
                ans=max(ans,j);
            }
        }
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