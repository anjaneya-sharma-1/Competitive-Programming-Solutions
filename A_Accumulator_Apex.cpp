#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 100000
#define MOD 1000000007

void solve(){
    ll x,n;
    cin>>x>>n;
    map<ll,queue<pair<ll,ll>>>L;
    for(ll i=0;i<n;i++){
        ll mini=INT_MAX;
        ll tot=0;
        ll len;cin>>len;
        for(ll j=0;j<len;j++){
            ll a;
            cin>>a;
            tot+=a;
            mini=min(mini,tot);
            if(tot>0){
                L[i].push({mini,tot});
                mini=INT_MAX;
                tot=0;
            }
        }
    }
    priority_queue<vector<ll>>pq;
    for(ll i=0;i<n;i++){
        if(!L[i].empty()){
            auto x=L[i].front();
            L[i].pop();
            pq.push({x.first,x.second,i});
        }
    }
    ll ans=x;
    ll temp=x;
    while(!pq.empty()){
        auto x=pq.top();
        pq.pop();
        if(temp+x[0]>=0){
            temp+=x[1];
            ans=max(ans,temp);
            if(!L[x[2]].empty()){
                auto node=L[x[2]].front();
                L[x[2]].pop();
                pq.push({node.first,node.second,x[2]});
            }
        }
    }
    cout<<ans<<endl;
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    ll t=1;
    //cin >> t;
    while (t--) solve();
}