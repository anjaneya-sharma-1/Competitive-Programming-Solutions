#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 1000000007

class Solution {
public:
    
    void solve() {
        ll n, x;
        cin >> n >> x;
        vector<ll> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        ll limit=1<<n;
        vector<pair<ll,ll>> dp(limit,{LLONG_MAX,LLONG_MAX});
        dp[0]={1,0};
        for(ll i=1;i<limit;i++){
            for(ll j=0;j<n;j++){
                if((1<<j)&i==0){
                    continue;
                }
                ll prev=i^(1<<j);
                auto p=dp[prev];
                if(p.second+v[j]<=x){
                    dp[i]=min(dp[i],{p.first,p.second+v[j]});
                }
                else{
                    dp[i]=min(dp[i],{p.first+1,v[j]});
                }

            }
        }
        cout<<dp[limit-1].first<<endl;

        
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll t = 1;
    while (t--) { 
        Solution s;  
        s.solve();
    }

    return 0;
}
