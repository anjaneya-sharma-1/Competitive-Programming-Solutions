#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  int t;
  cin >> t;
  while (t--) {
    ll n;
    cin>>n;
    vector<pair<ll,ll>> v;
    for (ll i =0;i<n;i++){
        ll curr;
        cin>>curr;
        v.push_back({curr,i});
    }
    sort(v.begin(),v.end());
    for (ll i =1;i<n;i++){
        v[i].first+=v[i-1].first;
    }
    vector <ll> result(n,0);
    map<int,int> m;
    for(ll i =n-1 ;i>=0;i--){
        ll sum=i;
        ll j=i+1;
        ll curr =v[i].first;

        while(j<n&&((v[j].first-v[j-1].first)<=curr)){
                if(m.find(j)!=m.end()){
                    sum=m[j];
                    break;
                }
                else{
                    sum++;
                    curr+=v[j].first-v[j-1].first;
                    
                    j++;}
            }
        result[v[i].second]=sum;
        m[i]=sum;
    }
    for(auto c: result){
        cout<<c<<" ";
    }
    cout<<endl;


  }
  return 0;
}