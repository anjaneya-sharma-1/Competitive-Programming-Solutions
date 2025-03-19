#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
void solve() {
    ll x,y;
    cin>>x>>y;
    ll ans=2*min(x,y);
    ll z=min(x,y);
    x-=z;
    y-=z;
    ll left=max(x,y);
    if(left>0){
        ans+=2*left-1;
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