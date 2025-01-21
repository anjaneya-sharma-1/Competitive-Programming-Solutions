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
    ll sum=0;
    for(ll i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    sort(a.begin(),a.end());
    ll m;
    cin>>m;
    vector<pair<ll,ll>>d(m);    
    for(ll i=0;i<m;i++){
        cin>>d[i].first>>d[i].second;
    }
    for(int i=0;i<m;i++){
        int u = upper_bound(a.begin(),a.end(),d[i].first)-a.begin();
        int l=u-1;
        ll ans=d[i].first+d[i].second;
        if(l>=0){
            ans=min(ans,d[i].first-a[l]+max(0ll,d[i].second-(sum-a[l])));
        }
        if(u<n){
            ans=min(ans,max(0ll,d[i].second-(sum-a[u])));
        }
        cout<<ans<<endl;
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
        delete s; 

        }
    return 0;
}