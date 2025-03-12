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
    for(ll i=0;i<n;i++){
        cin>>a[i];
        mp[a[i]]=i;
    }
    vector<ll>b(n);
    for(ll i=0;i<n;i++){
        cin>>b[i];
    }
    ll ans=mp[b[0]]+1;
    vector<pair<ll,ll>>c;
    for(ll i=0;i<n;i++){
        c.push_back({abs(a[i]-a[ans-1]),a[i]});
    }
    sort(c.begin(),c.end());
    vector<ll>d;
    for(ll i=0;i<n;i++){
        d.push_back(c[i].second);
    }
    if(d==b){
        cout<<ans<<endl;
    }
    else{
        cout<<-1<<endl;
    }
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