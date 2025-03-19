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
    vector<ll>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    if(a[0]==0||a[n-1]==0){
        cout<<1<<endl;
        return;
    }
    vector<ll>dp(n,1e9);
    vector<ll>first(n+1,-1);
    dp[0]=1;
    first[a[0]]=0;
    
    ll best=(a[0]==0?1:1e9);
    for(int i=1;i<n;i++){
        if(a[i]==0){
            best=min(best,dp[i-1]);
            dp[i]=1;
            continue;
        }
        dp[i]=dp[i-1]+1;
        if(first[a[i]]==-1){
            first[a[i]]=i;
        }
        else{
            if(dp[i]<dp[first[a[i]]]){
                first[a[i]]=i;
            }
            dp[i]=min(dp[i],dp[first[a[i]]]);
        }
     
    }
    vector<ll>last(n+1,-1);
    last[a[n-1]]=n-1;
    ll ans=dp[n-1];
    dp.assign(n,1e9);
    dp[n-1]=1;
    if(a[n-1]==0){
        best=1;
    }
    for(int i=n-2;i>=0;i--){
        if(a[i]==0){
            best=min(best,dp[i+1]);
            dp[i]=dp[i+1];
            continue;
        }
        dp[i]=dp[i-1]+1;
        if(last[a[i]]==-1){
            last[a[i]]=i;
        }
        else{
            if(dp[i]<dp[last[a[i]]]){
                last[a[i]]=i;
            }
            dp[i]=min(dp[i],dp[last[a[i]]]);
        }
    }
    cout<<min(ans,best+1)<<endl;
    
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