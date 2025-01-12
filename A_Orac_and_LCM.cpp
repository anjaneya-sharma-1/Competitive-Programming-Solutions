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
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    vector<ll>pre(n,0);
    vector<ll>suf(n,0);
    pre[0]=a[0];
    for(ll i=1;i<n;i++){
        pre[i]=__gcd(pre[i-1],a[i]);
    }
    suf[n-1]=a[n-1];
    for(ll i=n-2;i>=0;i--){
        suf[i]=__gcd(suf[i+1],a[i]);
    }
    
    ll gc=suf[0];
    ll ans=gc;

    for(ll i=0;i<n;i++){
        ll temp=0;
        if(i==0){
            temp=suf[1];
        }
        else if(i==n-1){
            temp=pre[n-2];
        }
        else{
            temp=__gcd(pre[i-1],suf[i+1]);
        }
        //cout<<temp<<endl;
        ans*=(temp/gc);
    }
    cout<<ans<<endl;
    
}

};
int main(){
    ll t=1;
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    while (t--){ 
        Solution* s = new Solution(); 
        s->solve();
        delete s; 

        }
    return 0;
}