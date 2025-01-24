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
    vector<ll>v;
    ll sum=0;
    for(ll i=0;i<n;i++){
        ll a;
        cin>>a;
        v.push_back(a);
        sum+=a;
    }
    vector<ll>dp(sum+1,0);
    dp[0]=1;
    ll ans=0;
    for(int i=0;i<n;i++){
        for(ll j=sum;j>=v[i];j--){
            if(dp[j-v[i]]){
                ans+=!dp[j];
                dp[j]=1;
                
            }
        }
    }
    cout<<ans<<endl;
    for(int i=1;i<=sum;i++){
        if(dp[i]){
            cout<<i<<" ";
        }
    }
    cout<<endl;
    
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