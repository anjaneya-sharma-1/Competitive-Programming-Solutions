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
    vector<ll>v;
    for(ll i=0;i<n;i++){
        ll x;
        cin>>x;
        v.push_back(x);
    }
    if(n==1){
        cout<<abs(v[0])<<endl;
        return;
    }
    vector<ll>neg(n,0);
    vector<ll>pos(n,0);
    pos[0]=max(0ll,v[0]);
    neg[n-1]=max(0ll,-v[n-1]);
    for(ll i=1;i<n;i++){
        if(v[i]>0){
            pos[i]+=pos[i-1]+v[i];
        }
        else{
            pos[i]=pos[i-1];
        }
    }
    for(ll i=n-2;i>=0;i--){
        if(v[i]<0){
            neg[i]+=neg[i+1]-v[i];
        }
        else{
            neg[i]=neg[i+1];
        }
    }
    ll ans=0;
    for(ll i=0;i<n;i++){
        ans=max(ans,pos[i]+neg[i]);
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