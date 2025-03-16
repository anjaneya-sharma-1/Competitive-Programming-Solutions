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
    string s1;
    string s2;
    cin>>s1;
    cin>>s2;
    vector<vector<ll>>dp(n+1,vector<ll>(3,INT_MIN));
    dp[n][0]=0;

    for(ll i=n-2;i>=0;i--){
        for(ll j=0;j<3&&j+i<=n;j++){
            if(j==0){
                if(i+3<=n){
                    int tot2=(s2[i]=='A')+(s2[i+1]=='A')+(s2[i+2]=='A');
                    int tot1=(s1[i]=='A')+(s1[i+1]=='A')+(s1[i+2]=='A');
                    dp[i][j]=max(dp[i][j],dp[i+3][0]+(tot1>=2)+(tot2>=2));
                }
                int tot1=(s1[i]=='A')+(s2[i]=='A');
                if(i<n-2){
                dp[i][j]=max(dp[i][j],dp[i+1][2]+((tot1+(s1[i+1]=='A'))>=2));
                dp[i][j]=max(dp[i][j],dp[i+1][1]+((tot1+(s2[i+1]=='A'))>=2));
                }
            }
            else if(j==1){
                if(i+3<=n){
                    int tot1=(s1[i]=='A')+(s1[i+1]=='A')+(s1[i+2]=='A');
                    int tot2=(s2[i+1]=='A')+(s2[i+2]=='A')+(s2[i+3]=='A');
                    dp[i][j]=max(dp[i][j],dp[i+3][1]+(tot1>=2)+(tot2>=2));
                }
                int tot1=(s1[i]=='A')+(s2[i+1]=='A')+(s1[i+1]=='A');
                dp[i][j]=max(dp[i][j],dp[i+2][0]+(tot1>=2));
               
            }
            else{
                if(i+3<=n){
                    int tot1=(s1[i+1]=='A')+(s1[i+2]=='A')+(s1[i+3]=='A');
                    int tot2=(s2[i]=='A')+(s2[i+1]=='A')+(s2[i+2]=='A');
                    dp[i][j]=max(dp[i][j],dp[i+3][2]+(tot1>=2)+(tot2>=2));
                }
                int tot1=(s2[i]=='A')+(s1[i+1]=='A')+(s2[i+1]=='A');
                dp[i][j]=max(dp[i][j],dp[i+2][0]+(tot1>=2));


            }
        }
        }
    cout<<dp[0][0]<<endl;
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