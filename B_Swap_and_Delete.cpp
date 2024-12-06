#include <bits/stdc++.h>

using namespace std;
int main() {
  int t;
  cin >> t;
  int prdct=1;
  while (t--) {
    int n,k;
    vector<int> v;
    cin>>n>>k;
    for(int i = 0 ; i< n ; i++){
      int x;
      cin>>x;
      v.push_back(x);
      prdct*=x;
    }
    if(prdct%k==0){
      cout<< 0;
    }
    
    if(k!=4){
      int mini = INT_MAX;
      for(int j = 0 ; j< n ; j++){
        mini=min(mini,k-(v[j]%k));
      }
      cout<< mini;
    }
    else{
      if(prdct%2==0){
        cout<< 1;
      }
      else{
        cout<< 2;
      }
    }
  }
  return 0;
}