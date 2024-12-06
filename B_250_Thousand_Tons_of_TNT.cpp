#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    ll n;
    cin >> n;
    if (n == 1)
    {
      ll curr;
      cin >> curr;
      cout << 0 << endl;
      continue;
    }
    vector<ll> v;
    ll curr;
    cin >> curr;
    v.push_back(curr);
    for (ll i = 0; i < n - 1; i++)
    {
      ll curr;
      cin >> curr;
      v.push_back(curr + v[i]);
    }
    ll ans = 0;
    
    for(ll i=1;i<n;i++){
      if(n%i==0){
        ll maxi = 0;
        ll mini = LLONG_MAX;
        ll prev=0;
        for(int j =i-1;j<n;j+=(i)){
          maxi=max(maxi,v[j]-prev);
          
          mini=min(mini,v[j]-prev);
          prev=v[j];
        }
        ans=max(maxi-mini,ans);
      }
    }

    cout << ans << endl;
  }
  return 0;
}