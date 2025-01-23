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
}

};
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    ll t;
    cin >> t;
        vector<vector<ll>>dp(N+1,vector<ll>(2,0));
    dp[1][0]=1;    
    dp[1][1]=1;
    for(ll i=2;i<=N;i++){
        dp[i][0]=(dp[i-1][0]*4+dp[i-1][1])%MOD;
        dp[i][1]=(dp[i-1][0]+dp[i-1][1]*2)%MOD;
    }

    
    
    while (t--){ 
        ll n;
        cin>>n;
        cout<<(dp[n][0]+dp[n][1])%MOD<<endl;  

        }
    return 0;
}