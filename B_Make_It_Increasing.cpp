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
    ll ans=0;
    for(ll i = 0 ;i<n; i++){
        cin >> a[i];
    }
    for(ll i=n-2;i>=0;i--){
        if(a[i+1]==0){
            cout<<-1<<endl;
            return;
        }
        while(a[i]>=a[i+1]){
            a[i]/=2;
            ans++;
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
        delete s; 

        }
    return 0;
}