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
    map<ll,vector<ll>>a;
    map<ll,ll>b;
    for(int i=0;i<n;i++){
        ll x,y;
        cin>>x>>y;
        a[x].push_back(y);
        b[y]++;
    }
    ll ans=n*(n-1)*(n-2)/6LL;
    for(ll i=1;i<=n;i++){
        ll tot=0;
    
        for(auto x:a[i]){
            tot+=(a[i].size()-1)*(b[x]-1);
        }
        ans-=tot;
    }
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
      

        }
    return 0;
}