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
    vector<ll>f(n,0);
    vector<ll>a(n);
    for(ll i=0;i<n;i++){
        cin>>a[i];
        
    }
    ll ans=0;
    for(ll i=0;i<n;i++){
        for(ll j=i+1;j<n;j++){
            if(a[i]>a[j]){
                f[i]++;
            }
        }
    }
    for(ll i=0;i<n;i++){
        for(ll j=0;j<i;j++){
            if(a[j]>a[i]){
                f[j]--;
            }
        }
        vector<ll>pre;
        pre.push_back(f[0]);
        for(ll j=1;j<n;j++){
            pre.push_back(pre[j-1]+f[j]);
        }
        for(ll j=0;j<i;j++){
            if(a[j]<a[i]){
                ans+=pre[i-1]-pre[j];
            }
        }

    }
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
        delete s; 

        }
    return 0;
}