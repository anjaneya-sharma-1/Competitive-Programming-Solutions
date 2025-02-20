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
    vector<ll>a(n);
   
    for(ll i=0;i<n;i++){
        cin>>a[i];   
        
    }
    ll ans=0;
    for(ll i=0;i<n;i++){
        if(i==0){
            if(i+2<n){
                ans=max(ans,a[i]);
            }
            else{
                ans=max(ans,abs(a[i]-a[i+1]));
            }
        }
        else if(i==n-1){
            if(i-2>=0){
                ans=max(ans,a[i]);
            }
            else{
                ans=max(ans,abs(a[i]-a[i-1]));
            }
        }
        else{
            ll curr=a[i];
            if(i+1==n-1){
                curr=abs(curr-a[i+1]);
                
            }
            if(i-1==0){
                curr=abs(curr-a[i-1]);
            }
            ans=max(ans,curr);
        }
    }
    cout<<ans<<endl;

    
    
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
        delete s; 

        }
    return 0;
}