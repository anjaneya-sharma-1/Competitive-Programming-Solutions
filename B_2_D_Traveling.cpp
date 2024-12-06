#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
void solve() {
    ll n,k,a,b;
    cin>>n>>k>>a>>b;
    vector<pair<ll,ll>>v(n);
    for(auto &i: v){
        cin>>i.first>>i.second;
    }
    ll mini1=abs(v[0].first-v[b].first)+abs(v[0].second-v[b].second);
    ll mini2=abs(v[0].first-v[a].first)+abs(v[0].second-v[a].second);
    b--;
    a--;
    for(ll i =0;i<k;i++){
        mini1=min(abs(v[i].first-v[b].first)+abs(v[i].second-v[b].second),mini1);
        mini2=min(abs(v[i].first-v[a].first)+abs(v[i].second-v[a].second),mini2);
    }
    cout<<min(abs(v[b].first-v[a].first)+abs(v[b].second-v[a].second),mini2+mini1)<<endl;    
}
 
};
int main(){
    ll t;
    cin >> t;
    Solution s;
    while (t--) s.solve();
    return 0;
}
