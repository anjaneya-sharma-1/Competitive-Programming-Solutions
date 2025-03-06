#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
void solve() {
    ll a,b,c,x,y,z;
    cin>>a>>b>>c>>x>>y>>z;
    ll ans=0;
    ans+=min(a,x);
    x-=min(a,x);
    y+=x;
    ans+=min(b,y);
    y-=min(b,y);
    z+=y;
    ans+=min(c,z);
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