#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  int t;
  cin >> t;
  while (t--) {
    ll n;
    cin>>n;
    map <ll,ll> m;
    ll count=0;
    ll sum=0;
    for (ll i =1; i<=n;i++){
        ll curr;
        cin>>curr;
        sum+=curr;
        if(curr==0|| sum==0){
            count++;
            m.clear();
            sum=0;
        }
        else{
        if (m[sum]!=0){
            count++;
            m.clear();
            sum=0;
        }
        else{
            
            m[sum]=i;
        }}
 
        
    }
    cout<<count<<endl;
  }
  return 0;
}