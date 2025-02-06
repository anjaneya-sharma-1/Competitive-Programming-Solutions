#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
void solve() {
    ll n, m;
    cin>>n>>m;
    vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        cin>>a[i];
    }
    sort(a.begin(), a.end());
    vector<ll> pre(n);
    pre[0] = a[0];
    for (int i = 1; i < n; i++) {
        pre[i] = pre[i - 1] + a[i];
    }
    ll ans = 0;
    vector<ll>dp(n);
    for (int i = 0; i < n; i++) {
        if (i < m) {
            dp[i] = a[i]+(i>0?dp[i-1]:0);
        } 
        else {
           
            dp[i] = dp[i - m]+pre[i];
        }
        cout<<dp[i]<<" ";
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