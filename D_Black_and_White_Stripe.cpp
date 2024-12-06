#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  int t;
  cin >> t;
  while (t--) {
    ll n , size;
    cin>>n>>size;
    string s;
    cin>>s;
    unordered_map<char,int> m ;
    m['B']=0;
    m['W']=0;
    ll mini=LLONG_MAX;
    for(int i   =0; i<size;i++){
        m[s[i]]++;
    }
    ll mo = m['W'];
    mini=min(mini,mo);
    if(mini==0){
        cout<<0<<endl;
        continue;
    }
    else{
        for(int i =size;i<n;i++){
            m[s[i]]++;
            m[s[i-size]]--;
            ll h =m['W'];
            mini=min(mini,h);
            if(mini==0){
                break;
            }
        }
        cout<<mini<<endl;
        }
    

  }
  return 0;
}