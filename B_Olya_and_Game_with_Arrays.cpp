#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  int t;
  cin >> t;
  while (t--) {
    ll n ;

    ll mini = LLONG_MAX ;
    ll mink =LLONG_MAX;
    cin>>n;
    vector<priority_queue<ll,vector<ll>,greater<ll>>> v(n);
    for(ll i = 0; i <n ; i++){
        ll m;
        cin>>m;
        
        for(ll j = 0 ; j <m ; j++){
            ll curr;
            cin>>curr;
            
            v[i].push(curr);
        
            mini=min(curr,mini);        
        }
        if(m>1){
            v[i].pop();}
        mink=min(mink,v[i].top());
    }
    ll sum=mini;
    ll m1 ,m2;
    int chck =0 ;
    for(ll i = 0; i <n ; i++){
        
        if(!chck&&v[i].top()==mink){
            chck=1;
            continue;
        }
        if(chck||v[i].top()!=mink){
            sum+=v[i].top();  
        }

 
    }
    
    cout<<sum<<endl;
  }
  return 0;
}