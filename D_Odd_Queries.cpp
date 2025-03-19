#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
void solve() {
    ll n,q;
    cin >> n>>q;
    vector<ll> a(n+1);
    for(int i = 1 ;i<=n; i++){
        cin >> a[i];
    }
    vector<ll>pre(n+1,0);
    for(int i = 1; i <= n; i++){
        pre[i] = pre[i-1] + a[i];
    }
    while(q--){
        ll l,r,k;
        cin >> l >> r>>k;
        ll sz=r-l+1;
        ll sum=pre[n]-(pre[r]-pre[l-1]);
        sum+=k*sz;
        cout<<(sum%2?"YES":"NO")<<endl;
    }

    
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