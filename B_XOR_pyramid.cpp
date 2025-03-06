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
    vector<ll>arr(n);
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }
    ll q;
    cin>>q;
    vector<vector<ll>>dp(n+1,vector<ll>(n+1,0));
    for(ll i=0;i<n;i++){
        dp[0][i]=arr[i];
    }
    for(ll i=1;i<n;i++){
        for(ll j=0;j<n-i;j++){
            dp[i][j]=dp[i-1][j]^dp[i-1][j+1];
        }
    }
    for(ll i=1;i<=n;i++){
        for(ll j=0;j<n;j++){
            dp[i][j]=max({dp[i][j],dp[i-1][j],dp[i-1][j+1]});
        }
    }
    while(q--){
        ll l,r;
        cin>>l>>r;
        cout<<dp[r-l][l-1]<<endl;
    }
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