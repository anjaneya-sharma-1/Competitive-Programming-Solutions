#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
void solve() {
    ll n,k,z;
    cin>>n>>k>>z;
    vector<ll>a(n);
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    
    ll ans=0;
    vector<ll>sum(n,0);
    sum[0]=a[0];
    for(ll i=1;i<n;i++){
        sum[i]=sum[i-1]+a[i];
    }
    for(int i=0;i<=k;i++){
        
        ll temp=sum[i];
        if(i+1<n){   
        ll left=min(((k-i)/2),z);
        temp+=left*(a[i]+a[i+1]);
        if(k-i-2*left>0){
            ll remain=k-i-2*left;
            temp+=sum[min(i+remain,n-1)]-sum[i];
        }}
        ans=max(ans,temp);
    }

    cout<<ans<<endl;
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