#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  int t;
  cin >> t;
  while (t--) {
    ll n;
    ll q;
    cin>>n>>q;
    vector<int> ps;
    ll maxi=LLONG_MIN;
    for(int i =0;i<n;i++){
        ll curr ;
        cin>>curr;
        if(ps.empty()){
            ps.push_back(curr);
            maxi=max(maxi,curr);
        }
        else{
            if(i<q){
                ll prev= ps[i-1];
                maxi=max(maxi,curr+prev);
            }
            ps.push_back(curr+ps[i-1]);
        }
    }

    ll maxi2=INT_MIN;
    for(int i =0;i<n;i++){
        ll curr;
        cin>>curr;
        maxi2=max(maxi2,curr);
        ll p = ps[i];
        if(i<q-1){
            maxi=max(((q-i-1)*maxi2)+p,maxi);
            }
    }
    cout<<maxi<<endl;
  }
  return 0;
}