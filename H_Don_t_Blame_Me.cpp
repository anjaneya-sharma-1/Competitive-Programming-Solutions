#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
void solve() {
    ll n,k;
    cin>>n>>k;
    vector<ll>a(n);
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    vector<vector<ll>>dp(n+1,vector<ll>(64,0));
    for(ll i=0;i<n;i++){
        dp[i][a[i]]=1;
    }
    for(ll i=1;i<n;i++){
        for(ll j=0;j<64;j++){
           dp[i][j]=(dp[i][j]+dp[i-1][j])%MOD;
           dp[i][j&a[i]]=(dp[i][j&a[i]]+dp[i-1][j])%MOD;
        }
    }
    ll ans=0;
    for(ll i=0;i<64;i++){
        if(__builtin_popcount(i)==k){
            ans=(ans+dp[n-1][i])%MOD;
        }
    }
    cout<<ans<<endl;
    
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