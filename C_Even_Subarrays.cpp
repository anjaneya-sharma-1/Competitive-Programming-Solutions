#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 262144
#define MOD 1000000007
class Solution{
    public:
void solve() {
    ll n;
    cin>>n;
    vector<ll>a(n+1);
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    ll ans=n*(n+1)/2;
vector<ll>mp(4*n+1,0);
    mp[0]=1;
    ll xorr=0;
    for(int i=1;i<=n;i++){
        xorr^=a[i];
        ll tot=0;

            tot+=mp[xorr];
        
        for(ll i=1;i*i<=2*n;i++){
            ll x=i*i;
            
  
                tot+=mp[xorr^x];
            
        }
        ans-=tot;
        mp[xorr]++;
        
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