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
    map<ll,ll>mp;
    ll count=0;
    ll countz=0;
    for(ll i=0;i<n;i++){
        cin>>a[i];

        mp[a[i]]++;
        if(mp[a[i]]==2&&a[i]!=0){
            count++;
            mp[a[i]]=0;
        }
        if(a[i]==0){
            countz++;
        }
    }
    ll ans=0;
    if(countz>0||count>0){
        ans=1;
    }
    cout<<n-2*count-countz+ans<<endl;
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