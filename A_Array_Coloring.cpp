#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
void solve() {
    
    ll tot=0;
    ll n;
    cin>>n;
    for(int i=0;i<n;i++){
        ll x;
        cin>>x;
        tot+=(x%2);
    }
    cout<<(tot%2?"NO":"YES")<<endl;
    
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