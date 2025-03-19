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
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<ll>dp(n,1e9);
    vector<ll>first(n+1,-1);
    dp[0]=1;
    first[a[0]]=0;
    for(int i=1;i<n;i++){
        dp[i]=dp[i-1]+1;
        if(first[a[i]]==-1){
            first[a[i]]=i;
        }
        else{
            if(dp[i]<dp[first[a[i]]]){
                first[a[i]]=i;
            }
            dp[i]=min(dp[i],dp[first[a[i]]]);
        }
    }
    cout<<dp[n-1]<<endl;
    
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