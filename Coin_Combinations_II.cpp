#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
void solve() {
    ll n,target;
    cin>>n>>target;
    vector<ll>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<ll>dp(target+1,0);
    dp[0]=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<=target;j++){
            if(j>=arr[i]){
                dp[j]+=dp[j-arr[i]];
                dp[j]%=MOD;
            } 
        }
    }
    cout<<(dp[target])<<endl;
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