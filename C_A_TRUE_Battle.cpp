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
    int found=0;
    for(int i=0;i<n;i++){
        if(i!=n-1&&s[i]=='1'&&s[i+1]=='1'){
            found=1;
            break;
        }
    }
    cout<<((s[n-1]=='1'||s[0]=='1'||found)?"YES":"NO")<<endl;
  }
  return 0;
}