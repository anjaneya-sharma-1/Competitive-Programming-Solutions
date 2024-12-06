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
    vector<ll> hi;
    vector<ll> wi;
    for(ll i =0;i<n;i++){
        ll w, h;
        cin>>w>>h;
        wi.push_back(w);
        hi.push_back(h);
    }
    ll sum =0;
    sort(wi.begin(),wi.end());
    sort(hi.begin(),hi.end());
    sum+=wi[0]+hi[0];
    for(int i =1;i<n;i++){
        sum+=wi[i]-wi[i-1];
        sum+=hi[i]-hi[i-1];
    }
    sum+=hi[n-1]+wi[n-1];
    cout<<sum<<endl;
    
}

};
int main(){
    ll t;
    cin >> t;
    Solution s;
    while (t--) s.solve();
    return 0;
}