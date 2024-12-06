#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  int t;
  cin >> t;
  while (t--) {
    ll n;
    cin>>n;
    if(n==1){
        cout<<'0'<<endl;
    }
    else if(n==2){
        cout<<"01"<<endl;
    }
    else{
        string s;
        s+='0';
        s+='1';
        n-=2;
        while(n--){
            s+='0';
        }
        cout<<s<<endl;
    }
    

  }
  return 0;
}