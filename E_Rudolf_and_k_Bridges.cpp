#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
void solve() {
    ll n,m,k,d;
    cin>>n>>m>>k>>d;
    vector<ll>ans(n);
    for(int i=0;i<n;i++){        
        vector<ll>dp(m,INT_MAX);
        multiset<ll>mul;
        cin>>dp[0];
        dp[0]=1;
        mul.insert(1);
        for(int j=1;j<m;j++){
            ll curr;
            cin>>curr;
            dp[j]=*mul.begin()+curr+1;
            if(j-d-1>=0){
            mul.erase(mul.find(dp[j-d-1]));}
            mul.insert(dp[j]);
        }
        ans[i]=dp[m-1];
    }
   ll curr=0;
    for(int i=0;i<k;i++){
        curr+=ans[i];
    }
    ll mini=curr;
    for(int i=k;i<n;i++){
        curr+=-ans[i-k]+ans[i];
        mini=min(mini,curr);
    }
    cout<<mini<<endl;
    
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