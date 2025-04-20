#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
void solve() {
    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    ll maxi=b+d+1;
    vector<ll>pre(maxi+1,0);
    for(int i=a;i<=b;i++){
        pre[(i+b)]++;
        pre[(i+c+1)]--;
    }
    for(int i=1;i<=maxi;i++){
        pre[i]+=pre[i-1];
    }
    for(int i=1;i<=maxi;i++){
        pre[i]+=pre[i-1];
    }
    ll ans=0;
    for(ll i=c;i<=d;i++){
        ans+=pre[maxi]-pre[i];
    }
    cout<<ans<<endl;
}

};
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    ll t=1;
    
    
    while (t--){ 
        Solution* s = new Solution(); 
        s->solve();
      

        }
    return 0;
}