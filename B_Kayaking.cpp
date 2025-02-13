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
    n*=2;
    
    vector<ll>arr(n);
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    ll ans=LLONG_MAX;
    for(ll i=0;i<n;i++){
        for(ll j=i+1;j<n;j++){
            ll curr=0;
            ll prev=-1;
            for(int k=0;k<n;k++){
                if(k==i||k==j){
                    continue;
                }
                if(prev==-1){
                    prev=arr[k];
                }
                else{
                    curr+=arr[k]-prev;
                    prev=-1;
                }
                
            }
            ans=min(ans,curr);
        }
    }
    cout<<ans<<endl;
    
}

};
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    ll t=1;
    
    
    while (t--){ 
        Solution* s = new Solution(); 
        s->solve();
        delete s; 

        }
    return 0;
}