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
    vector<ll>dp(n+1,INT_MAX);
    dp[n]=0;
    vector<int>v;
    v.push_back(n);
    for(int i=n;i>=1;i--){
        if(dp[i]==INT_MAX){
            continue;
        }
        vector<int>temp;
        int x=i;
        while(x>0){
            temp.push_back(x%10);
            x/=10;
        }
        for(int j=0;j<temp.size();j++){
            if(i-temp[j]>=0){
                if(dp[i-temp[j]]>dp[i]+1){
                    dp[i-temp[j]]=dp[i]+1;
                    v.push_back(i-temp[j]);
                }
            }
        }
    }
    cout<<dp[0]<<endl;
    
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