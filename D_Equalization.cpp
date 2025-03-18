#include <bits/stdc++.h>
using namespace std;
#define ll long long
class Solution {
public:
vector<vector<ll>> dp;
Solution() {
    dp=vector<vector<ll>>(61,vector<ll>(61,LLONG_MAX));
      
}
    void solve() {
        ll x, y;
        cin>>x>>y;
        if(x==y){
            cout<<0<<endl;
            return;
        }
        ll ans = LLONG_MAX;
        for (int bitx = 0; bitx <= 61; bitx++) {
            ll newx = x >> bitx;
            for (int bity = 0; bity <= 61; bity++) {
                ll newy = y >> bity;
                if(newx == newy) {
                    int tot = bitx + bity;
                    if(tot <= 120) {
                        ans = min(ans, dp[tot]);
                    }
                }
            }
        }
        cout<<ans<<endl;
    }
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) { 
        Solution s;
        s.solve();
    }
    return 0;
}
