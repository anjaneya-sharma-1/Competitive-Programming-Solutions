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
    vector<ll>mask(32,0);
    for(int i=0;i<n;i++){
        ll x;
        cin>>x;
        mask[__builtin_clz(x)]++;
    }
    ll ans=0;
    for(int i=0;i<32;i++){
        ans+=mask[i]*(mask[i]-1)/2;
    }
    cout<<ans<<endl;
    
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