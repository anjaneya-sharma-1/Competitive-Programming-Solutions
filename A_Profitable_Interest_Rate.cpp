#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  int t;
  cin >> t;
  while (t--) {
    ll a;
    ll b;
    cin>>a>>b;
    if(a>b){
        cout<<a<<endl;
    }
    else if(a==b){
        cout<<a<<endl;
    }
    else{
        ll ans= (2*a)-b;
        if(ans>0){
            cout<<ans<<endl;
        }
        else{
            cout<<0<<endl;
        }
    }

  }
  return 0;
}