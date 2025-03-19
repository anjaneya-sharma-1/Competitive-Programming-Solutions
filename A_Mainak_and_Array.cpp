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
    vector<ll> a(n);
    for(int i = 0 ;i<n; i++){
        cin >> a[i];
    }
    if(n==1){
        cout<<0<<endl;
        return;
    }
    ll ans=*max_element(a.begin()+1,a.end())-a[0];
    ans=max(ans,a[n-1]-*min_element(a.begin(),a.end()-1));
    for(ll i=0;i<n-1;i++){
        ans=max(ans,(a[i]-a[i+1]));
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
        delete s; 

        }
    return 0;
}