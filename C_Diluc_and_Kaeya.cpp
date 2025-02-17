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
    string s;
    cin>>s;
    
    
    ll d1=0;
    ll k1=0;
    map<pair<ll,ll>,ll>mp;
    for(ll i=0;i<n;i++){
        if(s[i]=='D'){
            d1++;
        }
        else{
            k1++;
        }
        ll g=__gcd(d1,k1);
        mp[{d1/g,k1/g}]++;
        cout<<mp[{d1/g,k1/g}]<<" ";
    }
    cout<<endl;
    
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