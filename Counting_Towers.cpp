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
    for(ll i=2;i<=n;i++){
        dp[i]=(sum+dp[i-1])%MOD;
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