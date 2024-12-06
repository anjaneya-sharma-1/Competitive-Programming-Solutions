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
    ll a[n];
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }

    sort(a,a+n);
    ll maxi=0;
    ll ans=1;
    ll prev=a[0];
    for(ll i=1;i<n;i++){
        if (a[i]-prev<=k)
        {
            ans++;
        }
        else{
            maxi=max(maxi,ans);
            ans=1;
        }
            prev=a[i];

        
        
        
    }
    maxi=max(maxi,ans);
    cout<<n-maxi<<endl;
    
}

};
int main(){
    ll t;
    cin >> t;
    
    while (t--){ 
        Solution* s = new Solution(); 
        s->solve();
        delete s; 

        }
    return 0;
}