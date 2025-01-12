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
    vector<ll> a(n);
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
 
    ll maxi=INT_MIN;
    ll mini=INT_MAX;
    for(ll i=0;i<n;i++){
        ll x;
        cin>>x;
        maxi=max({maxi,a[i]+x,a[i]-x});
        mini=min({mini,a[i]+x,a[i]-x});
    }
    cout<<setprecision(10);

    cout<<(maxi+mini)*(1.0)/2<<endl;

    
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