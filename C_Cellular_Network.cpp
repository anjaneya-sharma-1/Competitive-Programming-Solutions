#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
void solve() {
    ll n, m;
    cin>>n>>m;
    vector<ll>a(n);
    for (int i = 0; i < n; i++) {
        cin>>a[i];
    }
    vector<ll>v(m);
    for(int i=0;i<m;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    sort(a.begin(),a.end());
    ll ans=0;
    for(int i=0;i<n;i++){
        ll r=lower_bound(v.begin(),v.end(),a[i])-v.begin();
        ll l=r-1;
        ll tot=INT_MAX;
        if(l>=0){
            tot=min(tot,a[i]-v[l]);
        }
        if(r<m){
            tot=min(tot,v[r]-a[i]);
        }
        ans=max(ans,tot);

    }
    cout<<ans<<endl;
    
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