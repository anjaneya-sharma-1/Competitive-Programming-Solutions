#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
void solve() {
    ll n,m;
    cin>>n>>m;
    vector<ll>a(n);
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    ll gc=0;
    for(ll i=1;i<n;i++){
            gc=__gcd(gc,abs(a[i]-a[i-1]));
        
    }
    for(ll i=0;i<m;i++){
        ll x;
        cin>>x;
        cout<<__gcd(a[0]+x,gc)<<" ";
    }
    
    
}

};
int main(){
    ll t=1;
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    while (t--){ 
        Solution* s = new Solution(); 
        s->solve();
        delete s; 

        }
    return 0;
}