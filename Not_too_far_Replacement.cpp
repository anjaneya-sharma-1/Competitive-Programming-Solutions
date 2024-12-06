#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  int t;
  cin >> t;
  while (t--) {
    ll n;
    cin>>n;
    vector<ll> v ;
    ll sum=0;
    ll maxi= INT_MIN;
    priority_queue<int,vector<int> , greater<>> pq;
    for(int i=0;i<n+1;i++){
        ll curr;
        
        cin>>curr;
        maxi=max(maxi,curr);
        
        v.push_back(curr);
        if(i!=n){sum+=curr;
        pq.push(curr);
        }
        
    }
    ll now = v[n];
    if(maxi==now){
        cout<<sum<<endl;
    }
    
    else{
   
        while(!pq.empty()){
            if(pq.top()<=2*now&&pq.top()>now){
                now=pq.top();
                }
            pq.pop();
        }

        cout<<sum-now+v[n]<<endl;
        
    }
  }
  return 0;
}