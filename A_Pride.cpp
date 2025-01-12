#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
void solve() {
    ll n;
    cin>>n;
    ll a[n];
    ll c=0;
    ll ans=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==1){
            c++;
        }
    }
    
    if(c>0){
        cout<<n-c<<endl;
        return;
    }
    ll mini=INT_MAX;
    for(ll i=0;i<n;i++){
        ll g=a[i];
        for(ll j=i+1;j<n;j++){
            g=__gcd(g,a[j]);
            if(g==1){
                mini=min(mini,j-i);
            }
        }
    }
    if(mini==INT_MAX){
        cout<<-1<<endl;
    }
    else{
        cout<<mini+n-1<<endl;
    }
    
    
}

};
int main(){
    ll t=1;
    
    while (t--){ 
        Solution* s = new Solution(); 
        s->solve();
        delete s; 

        }
    return 0;
}