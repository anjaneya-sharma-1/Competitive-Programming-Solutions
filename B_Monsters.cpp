#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  int t;
  cin >> t;
  while (t--) {
    priority_queue<pair<int,int>> pq;
    ll n , k ;
    cin>>n>>k;
    ll b =n;
    while(n--){
        ll h;
        cin>>h;
        pq.push({h%k==0?k:h%k,n});
    }
    n=b;
    while(n--){
        cout<<b-pq.top().second<<" ";
        pq.pop();
    }
    cout<<endl;
  }
  return 0;
}