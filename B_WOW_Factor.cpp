#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
void solve() {
    string s;
    cin>>s;
    ll n=s.size();
    vector<ll>dp(n,0);
    vector<ll>dp2(n,0);
    ll ans=0;
    for(int i=0;i<n;i++){
       
            if(s[i]!='o'&&i>0&&s[i-1]=='v'){
                dp[i]=dp[i-1]+1;
            }
            else if(i>0){
                dp[i]=dp[i-1];
            }
    
    }
    for(int i=n-1;i>=0;i--){
        if(s[i]!='o'&&i<n-1&&s[i+1]=='v'){
                dp2[i]=dp2[i+1]+1;
            }
            else if(i<n-1){
                dp2[i]=dp2[i+1];
            }
    }
    for(int i=1;i<n-1;i++){
        if(s[i]=='o'){
            ans+=dp[i-1]*dp2[i+1];
        }
    }
    cout<<ans<<endl;
}

};
int main(){
    ll t=1;
    
    while (t--){ 
        Solution* s = new Solution(); 
        s->solve();
        delete s; 

        }
    return 0;
}