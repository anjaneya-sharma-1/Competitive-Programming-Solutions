#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  int t;
  cin >> t;

  while (t--) {
    ll n , x;
    cin>>n>>x;
    ll v=-1;
    ll c=0;
    ll maxi=INT_MIN;
    ll mini=INT_MAX;
    vector<int> k;
    for(int i=0;i<n;i++){
        ll a;
        cin>>a;
        k.push_back(a);

        if(v<1){
            v++;
            if(v==-1){
                continue;
            }
            if(abs(a-k[i-1])<=x*2){
                ll prev =k[i-1];
                maxi=max(prev,a);
                mini=min(prev,a);}
            else{
                v=0;

                c++;
            }
        }
        else{
            if(abs(a-mini)<=2*x&&abs(a-maxi)<=2*x){
                maxi=max(maxi,a);
                mini=min(mini,a);
            }
            else{
                v=0;
                maxi=INT_MIN;
                mini=INT_MAX;
                c++;
            }
            
        }
    }  
    cout<<(c==0?0:c-1)<<endl;
  }
  return 0;
}