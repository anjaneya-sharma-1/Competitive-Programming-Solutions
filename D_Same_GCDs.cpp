#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
void solve() {
    ll a,m;
    cin>>a>>m;
    ll g=__gcd(a,m);
   
    ll maxi=a+m-1;
    ll t=m/g;
    ll y=(a/g)*g +(a%g==0?0:g);
    ll ans=maxi/g;
    ans-=y/g;
    map<ll,ll>mp2;
    
    vector<ll>div;
    for(ll i=2;i*i<=t;i++){
        if(t%i==0){
            div.push_back(i);
            if(i!=t/i)
            div.push_back(t/i);
        }
    }
    div.push_back(t);
    map<ll,ll>mp;
    for(ll i=0;i<div.size();i++){
        ll x=div[i];
        while(x<=maxi){
            if(x>a&&!mp[x]&&mp2[x]){
                ans--;
                mp[x]=1;
            }
            x+=div[i];
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