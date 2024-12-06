#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
void solve() {
    ll n , k;
    cin>>n>>k;
    vector<ll> v(n);

    for(auto &a:v){
        cin>>a;
    
    }
    sort(v.begin(),v.end());
    ll i=0; 
    ll j=n-1;
    vector<ll> ps(n+1);
    ll sum =0;
    for(ll i =0;i<n;i++){
        sum+=v[i];
        ps[i+1]=sum;
    }
    ll ans =0;
    for(int i=0;i<=k;i++){
        ans=max(ps[n-k+i]-ps[2*(i)],ans);
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