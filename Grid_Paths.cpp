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
    vector<string>grid(n);
    for(int i=0;i<n;i++){
        cin>>grid[i];
    }
    vector<vector<ll>>dp(n,vector<ll>(n,0));
    dp[0][0]=(grid[0][0]=='.');
    if(grid[0][0]=='*'){
        cout<<0<<endl;
        return;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(grid[i][j]=='*'){
                dp[i][j]=0;
                continue;
            }
            if(i>0){
                dp[i][j]+=dp[i-1][j];
            }
            if(j>0){
                dp[i][j]+=dp[i][j-1];
            }
            dp[i][j]%=MOD;
        }
    }
    cout<<dp[n-1][n-1]<<endl;
    
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