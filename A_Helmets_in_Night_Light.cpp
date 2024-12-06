#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  int t;
  cin >> t;
  while (t--) {
    priority_queue<pair<ll,ll>, vector<pair<ll,ll>> , greater<>> pq;
    ll n,p ,curr;
    cin>> n>>p;
    vector<ll> v;
    for(ll i=0;i<n;i++){
        cin>>curr;
        v.push_back(curr);
    }
    for(ll i=0;i<n;i++){
        cin>>curr;
        pq.push({curr,v[i]});
    }
    ll cost=p;
    n--;
    while(n>0&&!pq.empty()){
        auto p2 = pq.top();
        if(p2.first<p){
            pq.pop();
            if(p2.second<=n){
                cost+=p2.second*p2.first;
                n-=p2.second;
            }
            else{
                cost+=p2.first*n;
                n=0;
            }}
        else{
            cost+=p;
            n--;
        }
    }
    cout<<cost<<endl;
  }
  return 0;
}