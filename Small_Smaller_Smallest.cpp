#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  int t;
  cin >> t;
  while (t--) {
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll count=0;
    for(int i =0;i<n;i++){
        if(s[i]=='1'){
            count++;
        }
    }
    if(count==0){
        cout<<s.size()<<endl;
    }
    else{
    cout<<count%2<<endl;}
  }
  return 0;
}