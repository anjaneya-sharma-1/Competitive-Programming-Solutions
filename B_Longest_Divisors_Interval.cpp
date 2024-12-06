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
    ll ans = 0;
    ll c=0;
    ll curr = 1;
    for (ll i = 1; i * i <= n; i++){
        if (n % i == 0){
            c++;
            curr*=i;
        }
        else{
            ans = max(ans, c);
            c = 0;
        }
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