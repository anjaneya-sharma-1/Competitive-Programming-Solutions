#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  int t;
  cin >> t;
  while (t--) {
    ll n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
      int curr;
      cin>>curr;
      v.push_back(curr);
    }
    int ans = v[0];
    int mini = min(v[0],0);
    int sum =v[0];
    for(int i =1;i<n;i++){
      if(abs(v[i])%2==abs(v[i-1])%2){
        mini=0;
        sum=0;
      }
      sum+=v[i];
      ans=max(ans,sum-mini);
      mini=min(sum,mini);
    }
    cout<<ans<<endl;
    }
    
  return 0;
}