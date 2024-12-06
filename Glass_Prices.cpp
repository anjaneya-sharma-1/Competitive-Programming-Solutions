#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  int t;
    t=1;
  while (t--) {
    ll x;
    ll y;
    cin>>x>>y;
    if(2*x<y){
        cout<< "PLASTIC";
    }
    else{
        cout<< "METAL";
    }
  }
  return 0;
}