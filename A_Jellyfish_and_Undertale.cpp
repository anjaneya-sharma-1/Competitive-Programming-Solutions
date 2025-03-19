#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
void solve() {
    ll a,b,n;
    cin>>a>>b>>n;
    vector<ll>arr(n);
    ll tot=0;
    for(ll i=0;i<n;i++){
        cin>>arr[i];
        tot+=min(arr[i],a-1);
    }
    tot+=b;
    cout<<tot<<endl;
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