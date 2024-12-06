#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll calc(ll n, ll m){
    ll result = (n*(n+1))/2;
    for(ll i = 0 ; i<m-1 ; i++){
        result -= (n-i);
    }
    return result;
}
int main() {
  ll t;
  cin >> t;
  while (t--) {
    ll n , s, t;
    cin >> n >> s >> t;
    ll temp = 0 ;
    ll ans = 0;
    for(ll i =0; i< n ; i++){
        ll t1;
        cin>>t1;
        if(t1>t){
            if(temp!=0&&temp>=s){
                ans+=calc(temp,s);

        }
             temp=0;
        }
        else{
            temp++;
        }
    }
    if(temp!=0&&temp>=s){
        ans+=calc(temp,s);
    }
    cout<<ans<<endl;
  }
  return 0;
}