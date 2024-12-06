#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
    ll rangeSum(ll l,ll r){
        return (l + r) * (r - l + 1)/2;
    }
void solve() {
    ll n,x,y;
    cin>>n>>x>>y;
    ll ans=0;
    ll a = n;
    ll  b = 1;
    ll i =x , j=y;
    ll lc = lcm(x,y);
    ll p = n/x -n/lc;
    ll m = n/y -n/lc;
    ans = rangeSum(n-p+1,n) -rangeSum(1,m);
    
    cout<<ans<<endl;

    
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