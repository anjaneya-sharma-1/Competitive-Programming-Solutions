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
    vector<ll>dp(target+1,INT_MAX);
    dp[0]=0;
    for(int i=0;i<=target;i++){
        for(int j=0;j<n;j++){
            if(i+arr[j]<=target){
                dp[i+arr[j]]=min(dp[i+arr[j]],dp[i]+1);
                
            } 
        }
    }
    cout<<(dp[target]==INT_MAX?-1:dp[target])<<endl;
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