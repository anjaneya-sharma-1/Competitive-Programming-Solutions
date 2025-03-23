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
    ll zero=1;
    ll one=0;
    for(ll i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==0){
            zero*=2;
        }
        else if(a[i]==1){
            one++;
        }
    }
    ll ans=one*(zero);
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