#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
void solve() {
        int n;
        cin >> n;
        vector<char> oL(n), oR(n);
        vector<int> aL(n), aR(n);
        for (int i = 0; i < n; i++){
            cin>>oL[i]>>aL[i]>>oR[i]>>aR[i];
        }
        vector<ll> dp(3, 0);
        dp[0] = 1; 
        dp[1] = 1; 
        dp[2] = 0; 
        for (ll i= n-1; i >= 0; i--){
            ll mL, constL;
            if(oL[i] == 'x'){
                mL = aL[i] - 1;
                constL = 0;
            } else { 
                mL = 0;
                constL = aL[i];
            }
            ll mR, constR;
            if(oR[i] == 'x'){
                mR = aR[i] - 1;
                constR = 0;
            } else { 
                mR = 0;
                constR = aR[i];
            }
            ll tot = constL + constR;
            vector<ll> next = dp;
            vector<ll> curr(3, 0);
            if(next[0]>=next[1]){
                curr[0]=next[0]*(1+mL);       
                curr[1]=next[1]+next[0]*mR;      
                curr[2]=next[0]*tot+next[2];  
            } else {
                curr[0]= next[0]+next[1]*mL;      
                curr[1]=next[1]*(1+mR);         
                curr[2]=next[1]*tot+next[2];  
            }
            dp = curr;
        }
        
        ll ans = dp[0]+dp[1]+dp[2];
        cout<<ans<<endl;
}

};
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    ll t;
    cin >> t;
    
    
    while (t--){ 
        Solution* s = new Solution(); 
        s->solve();
        delete s; 

        }
    return 0;
}