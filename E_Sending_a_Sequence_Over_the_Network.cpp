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
    vector<ll> a(n+1);
    for(ll i=1;i<=n;i++){
        cin>>a[i];
    }
    vector<ll> dp(n+1,0);
    dp[0]=1;
    for(int i=1;i<=n;i++){
        if(i-a[i]>0){
            dp[i]=dp[i]||dp[i-a[i]-1];
        }
        if(i+a[i]<=n&&dp[i-1]){
            dp[a[i]+i]=1;
        }
    }
    cout<<(dp[n]? "YES":"NO")<<endl;
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