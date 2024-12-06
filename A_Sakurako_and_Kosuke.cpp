#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  int t;
  cin >> t;
  while (t--) {
    ll n;
    cin>>n;
    ll i =1;
    ll x =0;
    ll k=-1;
    while(abs(x)<=n){
        x+=((2*i)-1)*k;
        k*=-1;
        i++;
    }
    cout<< (k==-1?"Kosuke":"Sakurako")<<endl;
  }
  return 0;
}