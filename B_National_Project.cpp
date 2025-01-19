#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
void solve() {
    ll n,g,b;
    cin>>n>>g>>b;
    ll half=(n+1)/2;
    ll ans=0;
    if(half%g==0){
        ans=(half/g)*(g+b)-b;
        if(ans<n){
            ans=n;
        }
    }
    else{
        ans=(half/g)*(g+b)+half%g;
        if(ans<n){
            ans=n;
        }
    }
    ans=max(ans,n);
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