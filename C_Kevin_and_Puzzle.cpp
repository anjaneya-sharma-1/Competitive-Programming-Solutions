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
    vector<ll>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
        
    }
    vector<ll>dp(n+1,0);
    dp[0]=1;
    dp[1]=(a[0]==0);
    dp[2]=(a[1]==1);
    for(int i=2;i<=n;i++){
        if(a[i -1]==a[i-2]){
            dp[i]=(dp[i]+dp[i-1])%MOD;
        }
        if(i>2&&a[i-1]==a[i-3]+1){
            dp[i]=(dp[i]+dp[i-2])%MOD;
        }
    }
    cout<<(dp[n]+dp[n-1])%MOD<<endl;

    
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