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
    unordered_map<ll,ll> mp1;
    vector<pair<ll,ll>> a(n);
    vector<ll> v;
    for(ll i=0;i<n;i++){
        cin>>a[i].first>>a[i].second;
        if(a[i].first==a[i].second){
            
            mp1[a[i].first]++;   
            if(mp1[a[i].first]==1){
                v.push_back(a[i].first);
            }         
        }
    }
    sort(v.begin(),v.end());
    for(ll i=0;i<n;i++){
        bool ok=0;
        if(a[i].first==a[i].second){
            cout<<(mp1[a[i].first]>1?0:1);
            continue;
        }
        ll l=lower_bound(v.begin(),v.end(),a[i].first)-v.begin();
        ll r=upper_bound(v.begin(),v.end(),a[i].second)-v.begin();
        if(r-l==a[i].second-a[i].first+1){
            cout<<0;
        }
        else{
            cout<<1;
        }
    }
    cout<<endl;
    
}

};
int main(){
    ll t;
    cin >> t;
    
    while (t--){ 
        Solution* s = new Solution(); 
        s->solve();
        delete s; 

        }
    return 0;
}