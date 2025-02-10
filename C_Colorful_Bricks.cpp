#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 998244353
class Solution{
    public:
void solve() {
    ll n,m,k;
    cin>>n>>m>>k;
    vector<vector<ll>>dp(n+1,vector<ll>(k+1,0));
    dp[0][0]=0;
    for(int i=1;i<=n;i++){
        dp[i][0]=m;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=k;j++){
            dp[i][j]=(dp[i-1][j-1]*(m-1)+dp[i-1][j])%MOD;
        }
    }
    cout<<dp[n][k]<<endl;
    
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