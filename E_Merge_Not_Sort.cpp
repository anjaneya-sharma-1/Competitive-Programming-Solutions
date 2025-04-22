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
    vector<ll>a(2*n);
    for(int i=0;i<2*n;i++){
        cin>>a[i];
    }
    vector<pair<ll,ll>>seg;
    seg.push_back({0,0});
    a.push_back(2*n+1);
    ll first=a[0];
    for(int i=1;i<=2*n;i++){
        if(a[i]>first){
            ll last=seg.back().first;
            seg.back().second=i-last;
            seg.push_back({i,0});
            first=a[i];
        }
    }
    seg.pop_back();
    ll m=seg.size();
    vector<vector<bool>>dp(m,vector<bool>(n+1,0));
    dp[0][seg[0].second]=1;
    dp[0][0]=1;
    for(int i=1;i<m;i++){
        dp[i]=dp[i-1];
        for(int j=n;j>=seg[i].second;j--){
            dp[i][j]=dp[i-1][j-seg[i].second]||dp[i][j];
        }
    }
    if(!dp[m-1][n]){
        cout<<-1<<endl;
        return;
    }
    vector<ll>vis(2*n,0);
    vector<pair<ll,ll>>A;
    ll needed=n;
    for(int i=m;i>=0&&needed>0;i--){
        if(i==0){
            if(seg[i].second==needed){
                A.push_back(seg[i]);
                break;
            }
        }
        if(seg[i].second<=needed&&dp[i-1][needed-seg[i].second]){
            A.push_back(seg[i]);
            needed-=seg[i].second;
        }
    }
    vector<ll>ans1;
    vector<ll>ans2;
    for(int i=0;i<A.size();i++){
        ll start=A[i].first;
        ll count=A[i].second;
        while(count--){
            vis[start++]=1;
        }
    }
    for(int i=0;i<2*n;i++){
        if(vis[i]){
            ans1.push_back(a[i]);
        }
        else{
            ans2.push_back(a[i]);
        }
    }
    for(auto x:ans1){
        cout<<x<<" ";
    }
    cout<<endl;
    for(auto x:ans2){
        cout<<x<<" ";
    }

    
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