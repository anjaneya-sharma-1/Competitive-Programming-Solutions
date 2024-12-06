#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  int t;
  cin >> t;
  while (t--) {
    ll n;
    cin>>n;
    ll cnt1=0;
    ll cnt2=0;
    unordered_map<ll,ll> m1;
    ll p1=0;
    ll p2=0;
    ll maxi=LLONG_MIN;
    for(ll i = 0; i<n;i++){
        ll curr;
        cin>>curr;
        if(p1==0){
            p1=curr;
            
            cnt1++;
            continue;
        }
        else if(p1==curr){
            cnt1++;
        }
        else if(p1!=curr){
            if(m1.find(p1)==m1.end()){
                m1[p1]=cnt1;
                maxi=max(maxi,cnt1);
            }
            else{

                ll c= m1[p1];
                m1[p1]=max(c,cnt1);
                maxi=max(maxi,cnt1);

            }
            cnt1=1;
            p1=curr;
        }
    }
    if(cnt1!=0){
        if(m1.find(p1)==m1.end()){
                m1[p1]=cnt1;
                maxi=max(maxi,cnt1);
            }
            else{

                ll c= m1[p1];
                m1[p1]=max(c,cnt1);
                maxi=max(maxi,cnt1);

            }
    }
    for(ll i = 0; i<n;i++){
        ll curr;
        cin>>curr;
        if(p2==0){
            p2=curr;

            cnt2++;
            continue;
        }
        else if(p2==curr){
            cnt2++;
        }
        else if(p2!=curr){
            if(m1.find(p2)==m1.end()){
                maxi=max(maxi,cnt2);
            }
            else{
                ll c = m1[p2];
                maxi=max(maxi,c+cnt2);

            }
            cnt2=1;
            p2=curr;
        }

    }
    if(cnt2!=0){
       if(m1.find(p2)==m1.end()){
                maxi=max(maxi,cnt2);
            }
            else{
                ll c = m1[p2];
                maxi=max(maxi,c+cnt2);
            } 
    }
    cout<<maxi<<endl;

  }
  return 0;
}