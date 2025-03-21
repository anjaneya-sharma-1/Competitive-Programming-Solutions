#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 998244353
class Solution{
    public:
void solve() {
    ll n;
    cin>>n;
    vector<ll>dp(n+1,0);
    dp[0]=1;
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j+=i){
            dp[j]++;
        }   
    }
    ll tot=0;
    dp[0]=1;
    for(int i=1;i<=n;i++){
        dp[i]=(tot+dp[i])%MOD;
        tot=(tot+dp[i])%MOD;
    }
    cout<<dp[n]<<endl;

    
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