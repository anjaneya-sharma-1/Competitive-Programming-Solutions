#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
void solve() {
    ll x, y, k;
    cin >> x >> y >> k;
    ll sticks = k * y +k;
    ll ans = 0;
    ans= (sticks-1)/(x-1) +((sticks-1)%(x-1)!=0);
    cout<<ans+k<<endl;
    
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