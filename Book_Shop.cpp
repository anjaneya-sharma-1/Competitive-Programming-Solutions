#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
void solve() {
    ll n,x;
    cin>>n>>x;
    vector<ll>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
  
    vector<ll>p(n);
    for(int i=0;i<n;i++){
        cin>>p[i];
    }
    vector<ll>dp(x+1,0);
    
        for(int j=0;j<n;j++){
            vector<ll>pp=dp;
            for(int i=1;i<=x;i++){
            if(a[j]>i){
                continue;
            }
            pp[i]=max(pp[i],p[j]+dp[i-a[j]]);
        }
        dp=pp;
    }
    cout<<dp[x]<<endl;
    
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