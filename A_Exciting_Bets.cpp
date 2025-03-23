#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
void solve() {
    ll a,b;
    cin>>a>>b;
    ll gc=abs(a-b);
    if(gc==0){
        cout<<0<<" "<<0<<endl;
    }
    else{
        ll ans1=a%gc;
        ll ans2=gc-ans1;
        cout<<gc<<" "<<min(ans1,ans2)<<endl;
    }
    
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