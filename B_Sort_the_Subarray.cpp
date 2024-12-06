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
    vector<ll> v(n+1);
    ll x=1, y=1;
    ll l ,r;
    for(int i =1;i<=n;i++){
        ll a;
        cin>>a;
        v[i]=a;
    }
    for(int i =1;i<=n;i++){
        ll a;
        cin>>a;
        v[i]=a;
    }
    l =1;
    r=2;
    while(r<=n){
        if(v[r]>=v[r-1]){
        while(r<=n&&v[r]>=v[r-1]){
            r++;
        }
        if(r-1-l>y-x){
            x=l;
            y=r-1;
            l=r;
        }}
        l=r;
        r++;
        
    }
    cout<<x<<" "<<y<<endl;
}

};
int main(){
    ll t;
    cin >> t;
    Solution s;
    while (t--) s.solve();
    return 0;
}