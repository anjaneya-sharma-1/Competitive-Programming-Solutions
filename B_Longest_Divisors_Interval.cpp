#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
void solve() {
    ll n;
    cin >> n;
    ll count = 0;
    ll ans=0;
    for(ll i=1;i<=100;i++){
        if(n%i==0){
            count++;

        }
        else{
            ans=max(ans,count);
            count=0;
        }
    }
    ans=max(ans,count);
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