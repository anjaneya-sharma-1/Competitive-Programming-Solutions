#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
    ll nCr(ll n, ll r)
{
    ll ans = 1;
        for (int i = 1, j = n - r + 1; i <= r; ++i, ++j) ans = ans * j / i;
        return ans;

}
void solve() {
    ll n,k;
    cin>>n>>k;
    vector<ll>v(k,0);
    for(int i =0;i<n;i++){
        for(int j)
    }
    
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