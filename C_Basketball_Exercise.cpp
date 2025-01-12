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
    vector<vector<ll>>dp(n+1,vector<ll>(2,0));
    vector<ll>v1(n+1);
    vector<ll>v2(n+1);
    for(int i=1;i<=n;i++){
        cin>>v1[i];
    }
    for(int i=1;i<=n;i++){
        cin>>v2[i];
    }
    dp[1][0]=v1[1];
    dp[1][1]=v2[1];
    for(int i=2;i<=n;i++){
        dp[i][0]=max(dp[i-1][1]+v1[i],dp[i-1][0]);
        dp[i][1]=max(dp[i-1][0]+v2[i],dp[i-1][1]);
    }
    cout<<max(dp[n][0],dp[n][1])<<endl;
}

};
int main(){
    ll t=1;
    
    while (t--){ 
        Solution* s = new Solution(); 
        s->solve();
        delete s; 

        }
    return 0;
}