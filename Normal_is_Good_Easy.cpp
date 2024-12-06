#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  int t;
  cin >> t;
  while (t--) {
    ll n;
    cin>>n;
    ll prev;
    cin>>prev;
    ll total=0;
    ll count =1;
    for(int i =1; i<n;i++){
        ll curr;
        cin>>curr;
        if(curr!=prev){
            prev=curr;
            
            total+=(count*(count+1))/2;
            count=1;
        }
        else{
            count++;
        }
    }

    total+=(count*(count+1))/2;
    cout<<total<<endl;
  }
  return 0;
}