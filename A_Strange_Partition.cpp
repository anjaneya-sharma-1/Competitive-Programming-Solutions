#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
void solve() {
    ll n,x;
    cin>>n>>x;
    vector<ll>a(n);
    ll sum=0;
    ll tot=0;
    for(ll i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
        tot+=(a[i]/x)+(a[i]%x!=0); 
    }

    cout<<(sum/x)+(sum%x!=0)<<" "<<tot<<endl;
    
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