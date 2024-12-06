#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  int t=1;
  while (t--) {
    ll n; 
    ll d;
    cin>> n ;
    cin>>d;
    ll b=n;
    priority_queue<int> pq;
    while(b--){
        ll curr;
        cin>>curr;
        pq.push(curr);
    }
    int c= 0;
    while(n>0){
 
        ll p =pq.top();
        ll k = (d/p) +1;
        if(k>n){
            break;
        }
        n-=k;
        pq.pop();
        c++;
    }
    cout<<c<<endl;
  }
  return 0;
}