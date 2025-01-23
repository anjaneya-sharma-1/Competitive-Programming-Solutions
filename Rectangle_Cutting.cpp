#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
void solve() {
    ll a,b;
    cin>>a>>b;
    vector<vector<ll>>dp(a+1,vector<ll>(b+1,INT_MAX));
    for(ll i=1;i<=a;i++){
        for(ll j=1;j<=b;j++){
            if(i==j){
                dp[i][j]=0;
            }else{
                for(ll k=1;k<i;k++){
                    dp[i][j]=min(dp[i][j],dp[k][j]+dp[i-k][j]+1);
                }
                for(ll k=1;k<j;k++){
                    dp[i][j]=min(dp[i][j],dp[i][k]+dp[i][j-k]+1);
                }
            }
        }
    }
    cout<<dp[a][b]<<endl;
    
    
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