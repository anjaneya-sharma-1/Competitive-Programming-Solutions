#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  int t;
    cin>>t;
  while (t--) {
    set<char> s;
    ll x , y;
    cin>>x>>y;
    string a,b;
    cin>>a;
    cin>>b;
    for(int i =0;i<x;i++){
        s.insert(a[i]);
    }
    for(int i =0;i<y;i++){
        s.insert(b[i]);
    }
    
    cout<<((s.size()!=26)?"YES":"NO")<<endl;
  }
  return 0;
}