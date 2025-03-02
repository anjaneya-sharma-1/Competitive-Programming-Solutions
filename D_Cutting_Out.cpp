#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
void solve() {
    ll n,k;
    cin>>n>>k;
    map<ll,ll> m;
    for(ll i=0;i<n;i++){
        ll x;
        cin>>x;
        m[x]++;
    }
    if(n==k){
        for(auto i:m){
            for(ll j=0;j<i.second;j++){
                cout<<i.first<<" ";
            }
        }
        return;
    }
    priority_queue<pair<ll,ll>> pq;
    for(auto i:m){
        pq.push({i.second,i.first});
    }
    ll l=1;
    ll r=n;
    vector<ll> ans;
    while(l<r){
        ll mid=(l+r)/2;
        priority_queue<pair<ll,ll>> pq1=pq;
        ll sum=0;
        vector<ll>temp;
        while(!pq1.empty()){
            ll x=pq1.top().first;
            ll y=pq1.top().second;
            pq1.pop();
            sum+=x/mid;
            for(ll i=0;i<x/mid;i++){
                temp.push_back(y);
            }
        }
        if(sum>=k){
            l=mid+1;
            ans=temp;
        }
        else{
            r=mid;
        }
    }
    for(ll i=0;i<k;i++){
        cout<<ans[i]<<" ";
    }
    
}

};
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    ll t=1;
    
    
    while (t--){ 
        Solution* s = new Solution(); 
        s->solve();
        delete s; 

        }
    return 0;
}