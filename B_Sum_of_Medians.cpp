#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
void solve() {
    ll n,k;
    cin>>k>>n;
    vector<ll>a(n*k);
    for(ll i=0;i<n*k;i++){
        cin>>a[i];
    }
    ll ans=0;
    ll start=k/2  - (k%2==0);
    ll end=k-start;
    start*=(n);
    
    for(ll i=start;i<n*k;i+=end){
        ans+=a[i];
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