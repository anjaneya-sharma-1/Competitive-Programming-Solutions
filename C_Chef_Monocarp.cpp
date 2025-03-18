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
    vector<ll>a(n+1);
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    ll ans=0;
    vector<vector<ll>>dp(n+1,vector<ll>(2*n+1,LLONG_MAX));
    dp[0][0]=0;
    for(int i=1;i<=2*n;i++){
        dp[0][i]=0;
    }
    for(int i=1;i<=n;i++){
        
        for(int j=1;j<=2*n;j++){
            dp[i][j]=dp[i][j-1];
            if (dp[i - 1][j - 1] != LLONG_MAX) {
            dp[i][j]=min(dp[i][j],dp[i-1][j-1]+abs(a[i]-j));}
        }
    }
    ans=dp[n][2*n];
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
        delete s; 

        }
    return 0;
}