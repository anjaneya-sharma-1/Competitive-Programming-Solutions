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
    vector<ll>a;
    for(ll i=0;i<n;i++){
        ll x;
        cin>>x;
        a.push_back(x);
    }
    sort(a.begin(),a.end());
    vector<pair<ll,ll>>cnt;
    ll count=1;
    for(int i=1;i<n;i++){
        if(a[i]==a[i-1]){
            count++;
        }
        else{
            cnt.push_back({a[i-1],count});
            count=1;
        }
    }
    cnt.push_back({a[n-1],count});
    n = cnt.size();
    vector<ll>dp(n+1,0);
    dp[0] =0;
    dp[1] = a[0]*cnt[0].second;
    for(ll i=2;i<=n;i++){
        if(cnt[i-2].first==cnt[i-1].first-1){
            dp[i]=dp[i-1];
        }
        else{
            dp[i] = dp[i-1]+cnt[i-1].second*cnt[i-1].first;
        }
        if(i-3>=0){
            dp[i] = max(dp[i],dp[i-2]+cnt[i-1].second*cnt[i-1].first);
        }
        else{
            dp[i] = max(dp[i],cnt[i-1].second*cnt[i-1].first);
        }
    }
    cout<<max(dp[n],dp[n-1])<<endl;
    
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