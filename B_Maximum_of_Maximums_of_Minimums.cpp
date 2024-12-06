#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
void solve() {
    ll n,k;
    cin>>n>>k;
    ll maxi=LLONG_MIN;
    ll mini=LLONG_MAX;
    ll f;
    ll l;
    for(int i =0;i<n;i++){
        ll curr;
        cin>>curr;
        if(i==0){
            f=curr;
        }
        else if(i==n-1){
            l=curr;
        }
        maxi=max(maxi,curr);
        mini=min(mini,curr);
    }
    if(k==1){
        cout<<mini<<endl;
        return;
    }
    else if(k==2){
        cout<<max({mini,l,f})<<endl;
        return;
    }
    cout<<maxi<<endl;
    
}

};
int main(){
    ll t=1;
    //cin >> t;
    
    while (t--){ 
        Solution* s = new Solution(); 
        s->solve();
        delete s; 

        }
    return 0;
}