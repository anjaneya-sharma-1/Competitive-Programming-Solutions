#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
    ll ans=0;
    void recur(ll l, ll r, ll k,ll mid,ll t){
        if(r<k){
            return;
        }
        ll modd=(r-l+1)%2;
        if(modd){

            ll centre=(r+l)/2;
            ans = (ans + (centre * t + mid)) ;  
            recur(1,centre-1,k,2*mid+t*(centre),t*2);
        }
        else{
           ll temp=(r+l)/2;
        recur(1,temp,k,t*(r-temp)+mid*2,t*2);
        }
        
    }
void solve() {
    ll n,k;
    cin>>n>>k;
    
    
    ll mid=(n+1)/2;
    if(n%2==0){
    recur(1,mid,k,mid,2);
    }
    else{
        ans+=mid;
    recur(1,mid-1,k,mid,2);
    
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