#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  int t;
  cin >> t;
  while (t--) {
    ll n;
    cin>>n;
    ll maxi=INT_MIN;
    ll mini = INT_MAX;
    for(int i =0; i<n;i++){
        ll curr;
        cin>>curr;
        maxi=max(maxi,curr);
        mini = min(mini,curr);
    }
    cout<<(maxi-mini)*(n-1)<<endl;
  }
  return 0;
}