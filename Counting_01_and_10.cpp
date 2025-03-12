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
    ll k = n/2;
    ll sum1 = k * (k + 1) / 2;
    ll sum2 = k * (k + 1) * (2 * k + 1) / 6;
    ll ans = n * sum1 - sum2 + (k + 1);    
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