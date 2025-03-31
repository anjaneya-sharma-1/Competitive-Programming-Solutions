#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
void solve() {
    ll n,m;
    cin>>n>>m;
    string a;
    string b;
    cin>>a>>b;
    vector<vector<ll>>dp(n+1,vector<ll>(m+1,0));
    ll maxi=0;
    for(ll i=1;i<=n;i++){
        for(ll j=1;j<=m;j++){
            if(a[i-1]==b[j-1]){
                dp[i][j]=dp[i-1][j-1]+2;
                maxi=max(maxi,dp[i][j]);
            }
            else{
                dp[i][j]=max(dp[i-1][j]-1,dp[i][j-1]-1);
                if(dp[i][j]<0){
                    dp[i][j]=0;
                }
            }
        }
    }
    cout<<maxi<<endl;
    
}

};
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    ll t=1;
    
    
    while (t--){ 
        Solution* s = new Solution(); 
        s->solve();
      

        }
    return 0;
}