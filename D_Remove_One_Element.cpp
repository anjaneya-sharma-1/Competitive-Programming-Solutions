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
    vector<ll>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<ll>dp1(n,1);
    vector<ll>dp2(n,1);
    for(int i=1;i<n;i++){
        if(v[i]>v[i-1]){
            dp1[i]=dp1[i-1]+1;
        }
    }
    for(int i=n-2;i>=0;i--){
        if(v[i]<v[i+1]){
            dp2[i]=dp2[i+1]+1;
        }
    }
    ll ans=0;
    for(int i=0;i<n;i++){
        if(i==0){
            ans=max(ans,dp2[i]);
        }
        else if(i==n-1){
            ans=max(ans,dp1[i]);
        }
        else{
            if(v[i-1]<v[i+1]){
                ans=max(ans,dp1[i-1]+dp2[i+1]);
            }
            ans=max(ans,dp1[i]);
          
        }
    }
    cout<<ans<<endl;
    
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