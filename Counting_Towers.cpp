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
    vector<ll>dp(n+1);
    dp[0]=1;    
    dp[1]=2;
    ll sum=3;
    vector<ll>dp2(n+1);
    dp2[0]=1;
    dp2[1]=1;
    ll sum2=2;
    for(int i=2;i<=n;i++){
        dp2[i]=(sum2+dp2[i-1])%MOD;
    }
    for(ll i=2;i<=n;i++){
        dp[i]=(sum+dp2[i]*dp2[i])%MOD;
        sum=(sum+dp[i])%MOD;
    }
    cout<<dp[n]<<endl;
    

    
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