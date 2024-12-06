#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
void solve() {
    ll n,m,r,c;
    cin>>n>>m>>r>>c;
    ll ans =n*m-((r-1)*m)-c;

    ans+=(n-r)*(m-1);
    cout<<ans<<endl;
    
}

};
int main(){
    ll t;
    cin >> t;

    
    while (t--){ 
        Solution* s = new Solution(); 
        s->solve();
        delete s; 

        }
    return 0;
}