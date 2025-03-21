#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
void solve() {
    ll n,m;
    cin>>n>>m;
    vector<ll>a(n+1);
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    ll ans=0;
    for(ll i=1;i<=n;i++){
        ans += (a[i] != a[i + 1]) * (n - (i + 1) + 1) * i;
    }
    while(m--){
        ll i,x;
        cin>>i>>x;
        ans -= (a[i] != a[i - 1]) * (n - i + 1) * (i - 1);
        ans -= (a[i + 1] != a[i]) * (n - (i + 1) + 1) * i;
        a[i] = x;
        ans += (a[i] != a[i - 1]) * (n - i + 1) * (i - 1);
        ans += (a[i + 1] != a[i]) * (n - (i + 1) + 1) * i;
        cout << ans + n * (n + 1) / 2 <<endl;

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
      

        }
    return 0;
}