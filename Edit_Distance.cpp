#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
void solve() {
    string s1;
    string s2;
    cin>>s1>>s2;
    ll n=s1.length();
    ll m=s2.length();
    vector<vector<ll>>dp(n+1,vector<ll>(m+1,0));
    for(ll i=0;i<=n;i++){
        dp[i][0]=i;
    }
    for(ll i=0;i<=m;i++){
        dp[0][i]=i;
    }
   for(int i=0;i<n;i++){
         for(int j=0;j<m;j++){
              if(s1[i]==s2[j]){
                dp[i+1][j+1]=dp[i][j];
              }else{
                dp[i+1][j+1]=min(dp[i][j],min(dp[i+1][j],dp[i][j+1]))+1;
              }
         }
   }
    cout<<dp[n][m]<<endl;
    
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