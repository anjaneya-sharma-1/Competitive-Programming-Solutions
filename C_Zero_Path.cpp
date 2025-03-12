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
    vector<vector<ll>>grid(n+1,vector<ll>(m+1,0));
    for(ll i=1;i<=n;i++){
        for(ll j=1;j<=m;j++){
            cin>>grid[i][j];
        }
    }
    vector<vector<pair<ll,ll>>>dp(n+1,vector<pair<ll,ll>>(m+1,{INT_MAX,INT_MIN}));
    dp[1][1]={grid[1][1],grid[1][1]};
    for(ll i=1;i<=n;i++){
        for(ll j=1;j<=m;j++){
            if(i==1&&j==1){
                continue;
            }
            if(i>1){
                dp[i][j].first=min(dp[i][j].first,dp[i-1][j].first+grid[i][j]);
                dp[i][j].second=max(dp[i][j].second,dp[i-1][j].second+grid[i][j]);
            }
            if(j>1){
                dp[i][j].first=min(dp[i][j].first,dp[i][j-1].first+grid[i][j]);
                dp[i][j].second=max(dp[i][j].second,dp[i][j-1].second+grid[i][j]);
            }
        }
    }
    if((dp[n][m].first<0&&dp[n][m].second<0)||(dp[n][m].first>0&&dp[n][m].second>0)||(n+m)%2==0){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
    

    
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