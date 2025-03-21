#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
    vector<vector<vector<vector<ll>>>>dp;
    Solution(){
        dp.resize(20,vector<vector<vector<ll>>>(10,vector<vector<ll>>(2,vector<ll>(2,-1))));
    }
    ll digitDP(string &s,ll n,ll prev,bool leading,bool tight){
        if(n==0){
            return 1;
        }
        if(prev!=-1&&dp[n][prev][leading][tight]!=-1){
            return dp[n][prev][leading][tight];
        }
        ll limit=tight?s[s.size()-n]-'0':9;
        ll ans=0;
        for(ll i=0;i<=limit;i++){
            if(i==prev&&!leading){
                continue;
            }
            ans+=digitDP(s,n-1,i,leading&&i==0,tight&&i==limit);
        }
        if(prev!=-1){
            dp[n][prev][leading][tight]=ans;
        }
        return ans;

    }
void solve() {
    ll a,b;
    cin>>a>>b;
    a--;
    string s1=to_string(a);
    string s2=to_string(b);
    ll n=s1.size();
    ll m=s2.size();
    ll ans1=digitDP(s1,n,-1,1,1);
    fill(dp.begin(),dp.end(),vector<vector<vector<ll>>>(10,vector<vector<ll>>(2,vector<ll>(2,-1))));
    ll ans2=digitDP(s2,m,-1,1,1);
    cout<<ans2-ans1<<endl;


    
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