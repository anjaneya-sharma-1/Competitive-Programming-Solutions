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
    string s;
    cin>>s;
    ll c=0;
    ll total=0;
    vector<ll>dp(n,0);
    vector<ll>dp2(n,0);
    
    for(int i=0;i<n;i++){
        if(s[i]=='*'){
            c++;
            if(i!=0){
            dp[i]=dp[i-1];}
            
            
        }
        else{
        if(i!=0){
        dp[i]=dp[i-1]+c;}
    }
    }
    c=0;
    for(int i=n-1;i>=0;i--){
        if(s[i]=='*'){
            c++;
            if(i!=n-1){
            dp2[i]=dp2[i+1];}
            
            
        }
        else{
        if(i!=n-1){
        dp2[i]=dp2[i+1]+c;}
    }
    }
    ll ans=1e18;
    for(int i=0;i<n;i++){
        
        if(i>0){
            ans=min(ans,dp[i-1]+dp2[i]);
        }
        if(i<n-1){
            ans=min(ans,dp2[i+1]+dp[i]);
        }
        ans=min(ans,dp[i]+dp2[i]);
    }
    cout<<ans<<endl;
   
}

};
int main(){
    ll t;
    cin >> t;
    
    while (t--){ 
        Solution* s = new Solution(); 
        s->solve();
        delete s; 

        }
    return 0;
}