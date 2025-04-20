#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 998244353
class Solution{
    public:
void solve() {
    ll n,k;
    cin>>n>>k;
    vector<ll>a(n);
    vector<ll>b(k);
    ll ans=1;
    map<ll,ll>mp;
    map<ll,ll>mp2;
    for(int i=0;i<n;i++){
        cin>>a[i];
        mp[a[i]]=i;}
    for(int i=0;i<k;i++){
        cin>>b[i];
        mp2[b[i]]=i;
    }
    for(int i=0;i<k;i++){
        ll ways=0;
        ll ind=mp[b[i]];
        if(ind<n-1){
            if(mp2.find(a[ind+1])==mp2.end()||mp2[a[ind+1]]<mp2[a[ind]]){
                ways++;
            }
        }
        if(ind>0){
            if(mp2.find(a[ind-1])==mp2.end()||mp2[a[ind-1]]<mp2[a[ind]]){
                ways++;
            }
        }
        ans=(ans*ways)%MOD;
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
      

        }
    return 0;
}