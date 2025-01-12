#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 998244353
 
void solve() {
    ll n,m;
    cin>>n>>m;
    map<ll,vector<ll>>row;
    map<ll,vector<ll>>col;
    set<ll>s;
    for(ll i=0;i<n;i++){
        for(ll j=0;j<m;j++){
            ll a;
            cin>>a;
            s.insert(a);
            row[a].push_back(i);
            col[a].push_back(j);
        }
    }
    vector<ll>L(s.begin(),s.end());
    ll ans=0;
    for(ll i=0;i<L.size();i++){
        sort(row[L[i]].begin(),row[L[i]].end());
        ll sum=0;
        for(ll j=0;j<row[L[i]].size();j++){
            ans+=row[L[i]][j]*j-sum;
            sum+=row[L[i]][j];
        }
 
        sort(col[L[i]].begin(),col[L[i]].end());
        ll sum2=0;
        for(ll j=0;j<col[L[i]].size();j++){
            ans+=col[L[i]][j]*j-sum2;
            sum2+=col[L[i]][j];
        }
    }
    cout<<ans<<endl;
}
int main(){
    ll t=1;
    //cin >> t;
    while (t--) solve();
}