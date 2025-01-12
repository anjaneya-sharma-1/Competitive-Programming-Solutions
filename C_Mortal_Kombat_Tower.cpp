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
    vector<ll>v(n+1);
    ll sum=0;
    for(int i=1;i<=n;i++){
        cin>>v[i];
        sum+=v[i];
    }
    vector<vector<ll>>dp(n+1,vector<ll>(3,0));
    dp[1][1]=v[1];
    for(int i=2;i<=n;i++){
        ll taken=v[i];
        ll notTaken=max({dp[i-1][0],dp[i-1][1],dp[i-1][2]});
        for(int j=1;j<=2;j++){
            dp[i][j]=max(dp[i-1][j-1],dp[i-1][j]);
        }
        
    }
    cout<<max({dp[n][0],dp[n][1],dp[n][2]})<<endl;
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