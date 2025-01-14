#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
void solve() {
    ll n;
    cin >> n;
    ll a[n];
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }
    vector<ll>dp(n, -1);
  
    for(ll i=0;i<n;i++){
        if(n-i-1==a[i]){
            dp[i]=0;
           
        }
    }
    dp[n-1]=1; 
    for(int i=n-2;i>=0;i--){
        if(dp[i]==-1){
            if(n-i-1-dp[i+1]==a[i]){
                dp[i]=dp[i+1];
            }
            else{
                dp[i]=dp[i+1]+1;
            }
            if(a[i]<n-i-1){
                dp[i]=min(dp[i],n-i-1-a[i]);
            }
            if(a[i]+i+1<n){
                dp[i]=min(dp[i],dp[a[i]+i+1]);
            }
        }
    }
    cout<<dp[0]<<endl;    
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