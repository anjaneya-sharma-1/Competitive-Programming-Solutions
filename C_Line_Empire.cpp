#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 998244353
 
void solve() {
    ll n,a,b;
    cin>>n>>a>>b;
    vector<ll>L;
    L.push_back(0);
    for(ll i=0;i<n;i++){
        ll a;
        cin>>a;
        L.push_back(a);
    }
    ll ans=0;
    if(a<=b){
        for(ll i=1;i<=n;i++){
            ans+=(a+b)*(L[i]-L[i-1]);
        }
        ans-=a*(L[n]-L[n-1]);
        cout<<ans<<endl;
    }else{
        ll curr=0;
        ll prev=INT_MAX;
        for(ll i=1;i<=n;i++){
            ans+=b*(L[i]-curr);
            prev=b*(L[i]-curr);
            if(prev*(n-i)>(L[i]-curr)*a){
                ans+=(L[i]-curr)*a;
                curr=L[i];
                
            }
        }
        
        cout<<ans<<endl;
    }
    
}
int main(){
    ll t;
    cin >> t;
    while (t--) solve();
}