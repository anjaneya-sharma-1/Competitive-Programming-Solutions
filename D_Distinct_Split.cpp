#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  int t;
  cin >> t;
  while (t--) {
    ll n;
    cin>>n;
    vector<ll> p;
    
    set<char> s;
    string st;
    for(ll i =0;i<n;i++){
        ll m =s.size();
        char curr;
        cin>>curr;
        s.insert(curr);
        st+=curr;
        p.push_back(s.size());
    }
    s.clear();
    vector<ll> su(st.size());
    for(ll i =n-1;i>=0;i--){
        s.insert(st[i]);
        su[i]=(s.size());
    }
    ll maxi = LLONG_MIN;
    for(ll i =0;i<n-1;i++){
        ll temp =  su[i+1]+p[i];
        maxi=max(temp,maxi);
    }
    cout<<maxi<<endl;
  }
  return 0;
}