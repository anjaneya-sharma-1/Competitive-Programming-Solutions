#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
    ll count =1;    
    unordered_map<ll,vector<pair<ll,ll>>> m;
    ll maxi = 0;
    
    void dfs(ll x, vector<ll>&dp,vector<ll>&cp , ll t){
        cp[x]=1;
        vector<pair<ll,ll>> v = m[x];
        for(int i =0;i<v.size();i++){
            auto p = v[i];
            dp[p.first]=min(dp[p.first],dp[x]+(p.second<t));
            if(!cp[p.first]){
                dfs(p.first,dp,cp,p.second);
            }
        }

    }
void solve() {
    ll n;
    cin>>n;
    
    for(ll i = 1; i<=n-1;i++){
        ll x,y;
        cin>>x>>y;
       // cout<<y<<" "; 
        m[x].push_back({y,i});
        m[y].push_back({x,i});
        
    }
    vector<ll> dp(n+1,INT_MAX);
    vector<ll>cp(n+1,0);
    dp[1]=1;
    ll h =1;
    dfs(h,dp,cp, n);
    for(int i =1;i<=n;i++){ 
        maxi =max(maxi,dp[i]);
    }
    cout<<maxi-1<<endl;

}

};
int main(){
    ll t;
    cin >> t;
    
    while (t--){ 
        Solution* s = new Solution(); 
        s->solve();

        }
    return 0;
}