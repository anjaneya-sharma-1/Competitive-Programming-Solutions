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
    vector<ll> v(n);
    for(auto &a:v){
        cin>>a;
    }
    ll ans =0;
    for(int i =0;i<n;i++){
        ans=__gcd(ans,abs(v[n-i-1]-v[i]));
    }
    cout<<ans<<endl;
    
}

};
int main(){
    ll t;
    cin >> t;
    Solution s;
    while (t--) s.solve();
    return 0;
}