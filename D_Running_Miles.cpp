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
    vector<ll>a(n);
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    vector<vector<ll>>dp(n+1,vector<ll>(3,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
            dp[i][j]=(i>0?dp[i-1][j]:0);
            if(j==0){
                dp[i][j]=max((i>0?dp[i-1][j]:0),a[i]+i+1);
            }
            if(j==1){
                dp[i][j]=max(dp[i][j],(i>0?dp[i-1][j-1]:0)+a[i]);
            }
            if(j==2){
                dp[i][j]=max(dp[i][j],(i>0?dp[i-1][j-1]:0)+a[i]-i-1);
            }
        }
    }
    cout<<dp[n-1][2]<<endl;

    
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