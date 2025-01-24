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
    vector<ll>v;
    for(int i=0;i<n;i++){
        ll a;
        cin>>a;
        v.push_back(a);
    }
    vector<vector<ll>>dp(n+1,vector<ll>(n+1,LLONG_MIN));
    for(int i=0;i<n;i++){
        dp[i][i]=v[i];
        if(i<n-1){
        dp[i][i+1]=max(v[i],v[i+1]);}
    }
    for(int i=n-1;i>=0;i--){
        for(int j=i+2;j<n;j++){
            dp[i][j]=max(dp[i][j],max(min(dp[i+2][j],dp[i+1][j-1])+v[i],min(dp[i+1][j-1],dp[i][j-2])+v[j]));
        }
    }
    cout<<dp[0][n-1]<<endl;
    
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