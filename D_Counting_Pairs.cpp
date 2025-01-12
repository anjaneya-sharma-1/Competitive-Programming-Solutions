#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
void solve() {
    ll n,x,y;
    cin>>n>>x>>y;
    vector<ll> v;
    ll sum=0;
    for(int i=0;i<n;i++){
        ll curr;
        cin>>curr;
        sum+=curr;
        v.push_back(curr);
    }
    ll l=sum-y;
    ll r=sum-x;
    sort(v.begin(),v.end());
    ll ans=0;
    for(int i=0;i<n;i++){
        auto b=upper_bound(v.begin()+i+1,v.end(),r-v[i]);
        auto a=lower_bound(v.begin()+i+1,v.end(),l-v[i]);
        ans+=b-a;
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