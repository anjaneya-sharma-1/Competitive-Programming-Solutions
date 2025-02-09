#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
    void generate_next_masks(ll current_mask, ll i, ll next_mask, vector<ll>& container, ll n) {
        if (i == n) {  
            container.push_back(next_mask);
            return;
        }
        if (current_mask & (1 << i)) {
            generate_next_masks(current_mask, i + 1, next_mask, container, n);
        }
        if (i < n - 1) { 
            if (((current_mask & (1 << i)) == 0) && ((current_mask & (1 << (i + 1))) == 0)) {
                generate_next_masks(current_mask, i + 2, next_mask, container, n);
            }
        }
        if ((current_mask & (1 << i)) == 0) {
            generate_next_masks(current_mask, i + 1, next_mask + (1 << i), container, n);
        }
    }
     
    ll recur(vector<vector<ll>>&dp,ll m,ll mask,ll n){
        if(m>=dp.size()){
            return mask==0;
        }
        if(dp[m][mask]!=-1){
            return dp[m][mask];
        }
        vector<ll>next;
        generate_next_masks(mask,0,0,next,n);
        ll ans=0;
        for(auto x:next){
            ans=(ans+recur(dp,m+1,x,n))%MOD;
        }
        return dp[m][mask]=ans;
        

        
    }
void solve() {
    ll n,m;
    cin>>n>>m;
    vector<vector<ll>>dp(m,vector<ll>((1<<n),-1));
    cout<<recur(dp,0,0,n)<<endl;
}

};
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    ll t=1;
    
    
    while (t--){ 
        Solution* s = new Solution(); 
        s->solve();
      

        }
    return 0;
}