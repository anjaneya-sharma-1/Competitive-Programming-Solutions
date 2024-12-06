#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  int t;
  cin >> t;
  while (t--) {
    ll n;
    cin>>n;
    ll sum=0;
    vector<pair<pair<int,int>,int>> v;
    for(int i =0;i<n;i++){
        for(int j =0;j<n;j++){
            ll curr;
            cin>>curr;
            if(curr<0){
                sum+=abs(curr);
                v.push_back({{i,j},curr});
            }
        }
    }


    ll sz = v.size();
    ll ans = 0;
    for(int i =0;i<sz;i++){
        auto curr = v[i];
        ll x=  curr.first.first;
        ll y =  curr.first.second;
        ll val= curr.second;
        if(val<0){
            
        ans+=(0-val);
        for(int j = i+1; j<sz;j++){
            ll p=  v[j].first.first;
            ll q =  v[j].first.second;
            ll data= v[j].second;
            if(p-x==q-y){
                
                v[j].second +=abs(val);}
        }}
    }
    cout<<ans<<endl;
  }
  return 0;
}