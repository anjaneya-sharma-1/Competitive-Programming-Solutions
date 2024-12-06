#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  int t;
  cin >> t;
  while (t--) {
    ll n,k;
    cin>>n>>k;
    vector<ll> v;
    for(ll i =0;i<n;i++){
        ll curr;
        cin>>curr;   
        v.push_back(curr);
    }
    sort(v.begin(),v.end());
    ll prev=0;
    ll curr=0;
    for(ll i =1;i<n;i++){
        ll height = v[i];
        curr=((v[i]-v[i-1])*i)+prev;
        if(curr>k){
           
            cout<<(((k-prev)/i)+v[i-1])<<endl;
            break; 
        }
        else if(curr==k){
            cout<<v[i]<<endl;
            break;
        }
        prev=curr;
    }
    if(curr<k){
    
        cout<<((k-curr)/n)+v[v.size()-1]<<endl;
    }   
  }
  return 0;
}