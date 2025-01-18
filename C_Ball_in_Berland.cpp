#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
void solve() {
    ll a,b,k;
    cin>>a>>b>>k;
    map<ll,ll>ma;
    map<ll,ll>mb;
    map<pair<ll,ll>,ll>mp;
    vector<pair<ll,ll>>v(k);
    for(int i=0;i<k;i++){
        cin>>v[i].first;
        ma[v[i].first]++;
    }
    for(int i=0;i<k;i++){
        cin>>v[i].second;
        mb[v[i].second]++;
        mp[v[i]]++;
    }
    ll ans=0;
    for(int i=0;i<k;i++){
        ans+=k-ma[v[i].first]-mb[v[i].second]+mp[v[i]];
    }
    cout<<ans/2<<endl;

    
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