#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
ll nCr(ll n, ll r) {
    if (r > n - r) r = n - r;
    ll ans = 1;
    for (ll i = 1; i <= r; i++) {
        ans *= n - r + i;
        ans /= i;
    }
    return ans;
}
void solve() {
    ll n,x;
    cin>>n>>x;
    vector<ll>arr(n);
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
   
    ll ans=0;
    ll count=0;
    for(int i=n-1;i>=0;i--){
        count++;
        if(count*arr[i]>=x){
            ans++;
            count=0;
        }
    }
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
      

        }
    return 0;
}