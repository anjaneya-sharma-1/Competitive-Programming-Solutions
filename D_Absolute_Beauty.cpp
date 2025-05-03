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
    vector<ll>A(n);
    vector<ll>B(n);
    for(ll i=0;i<n;i++){
        cin>>A[i];
    }
    ll tot=0;
    for(ll i=0;i<n;i++){
        cin>>B[i];
        if(A[i]>B[i])swap(A[i],B[i]);
        tot+=abs(A[i]-B[i]);
    }
    ll ans=0;
    ll maxi1=INT_MIN;
    ll ind1=-1;
    for(ll i=0;i<n;i++){
        if(A[i]>maxi1){
            maxi1=A[i];
            ind1=i;
        }
    }
    ll mini1=INT_MAX;
    for(ll i=0;i<n;i++){
        if(i!=ind1&&B[i]<mini1){
            mini1=B[i];
        }
    }
    ans=max(ans,maxi1-mini1);
    ll mini2=INT_MAX;
    ll ind2=-1;
    for(ll i=0;i<n;i++){
        if(B[i]<mini2){
            mini1=B[i];
            ind2=i;
        }
    }
    ll maxi2=INT_MIN;
    for(ll i=0;i<n;i++){
        if(i!=ind2&&A[i]>maxi2){
            maxi2=A[i];
        }
    }
    ans=max(ans,maxi2-mini2);
    cout<<tot+2*ans<<endl;
 
}


};
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    ll t;
    cin >> t;
    
    
    while (t--){ 
        Solution* s = new Solution(); 
        s->solve();
      

        }
    return 0;
}