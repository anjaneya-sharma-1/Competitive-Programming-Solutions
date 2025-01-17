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
    vector<ll>arr={1,2,3,4,5,6};
    vector<ll>dp(n+1,0);
    dp[0]=1;
    for(int i=0;i<=n;i++){
    
        for(int j=1;j<=6;j++){
            if(i+j<=n){
                dp[i+j]+=dp[i];
                dp[i+j]%=MOD;
            }
           
        }
        
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
        delete s; 

        }
    return 0;
}