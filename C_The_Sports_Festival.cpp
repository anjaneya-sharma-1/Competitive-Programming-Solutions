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
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
   
    if(n==1){
        cout<<0<<endl;
        return;
    }
    sort(a.begin(),a.end());
    vector<vector<ll>>dp(n+1,vector<ll>(n+1,INT_MAX));
    for(int i=0;i<=n;i++){
        dp[i][0]=0;
    }
    
    for(int i=1;i<n;i++){
        for(int j=0;j<=n-i;j++){
            dp[j][i]=min(dp[j][i-1]+a[j+i]-a[j],dp[j+1][i-1]+a[j+i]-a[j]);
        }
    }
    ll ans=dp[0][n-1];
    cout<<ans<<endl;
    
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