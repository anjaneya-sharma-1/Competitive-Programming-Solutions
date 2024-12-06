#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  int t;
  cin >> t;
  while (t--) {
    ll n;
    char t;
    string s;
    cin>>n>>t;
    cin>>s;
    if(t=='g'){
        cout<<0<<endl;
        continue;
    }
    ll sz = s.size();
    ll last = 0;
    ll cntr= 0 ;
    char curr = s[sz-cntr-1];
    int found = 0;
    while(curr!='g'){
        if(curr==t){
            last=cntr;
            found=1;
        }
        cntr++;
        curr=s[sz-cntr-1];
        

    }

    ll maxi=0;
    ll ind = sz-cntr-1;
    cntr=0;
    while(ind>=0){
        curr=s[ind];
        if(curr==t){
            maxi=max(cntr,maxi);
        }
        if(curr=='g'){
            cntr=0;
        }
        cntr++;
        ind--;
    }
    if(found){maxi=max(maxi,cntr+last);}
    cout<<maxi<<endl;

  }
  return 0;
}