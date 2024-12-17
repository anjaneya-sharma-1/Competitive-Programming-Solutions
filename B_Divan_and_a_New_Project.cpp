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
    vector<pair<ll,ll>> v;
    for(int i=1;i<=n;i++){
        ll curr;
        cin>>curr;
        v.push_back({curr,i});
    }
    vector<ll> dp(n+1,0);
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    int i=-1;
    int j=1;
    ll ans=0;
    for(int k=0;k<n;k+=2){
        ans+=v[k].first*(i*-1)*2;
        dp[v[k].second]=i--;

    }
    for(int k=1;k<n;k+=2){
        ans+=v[k].first*(j)*2;
        dp[v[k].second]=j++;
    }
    cout<<ans<<endl;
    for(int i=0;i<=n;i++){
        cout<<dp[i]<<" ";
    }
    cout<<endl;
}

};
int main(){
    ll t;
    cin >> t;
    
    while (t--){ 
        Solution* s = new Solution(); 
        s->solve();
        delete s; 

        }
    return 0;
}