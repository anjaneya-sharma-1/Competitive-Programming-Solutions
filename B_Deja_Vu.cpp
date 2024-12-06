#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  int t;
  cin >> t;
  while (t--) {
    ll a,x;
    cin>>a>>x;
    vector<ll> v;
    vector<ll> st;
    for(ll i=0;i<a;i++){
        ll curr;
        cin>>curr;
        v.push_back(curr);
    }
    for(ll i=0;i<x;i++){
        ll curr;
        cin>>curr;
        st.push_back(curr);
    }
    auto it = st.begin();
    ll siz =st.size();
    ll prevMini=LLONG_MAX;
    for(ll i =0;i<siz;i++){
            if(st[i]<prevMini){
                for(ll j =0;j<a;j++){
                
                    if(v[j]%(1<<st[i])==0){
                        v[j]+=(1<<((st[i])-1));
                    }
                }
                prevMini=min(prevMini,st[i]);
                }
        it++;
    }
    for(ll i=0;i<a;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
  }
  return 0;
}