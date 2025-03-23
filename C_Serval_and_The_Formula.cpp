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
    

    if(x==y){
        cout<<-1<<endl;
        return;
    }
    if(x<y){
        swap(x,y);
    }
    ll msb=0;
    for(ll i=63;i>=0;i--){
        if((x&(1LL<<i))){
            msb=i;
            break;
        }
    }
    ll ansBit=msb+1;
    ll ans=(1LL<<ansBit)-x;
    cout<<ans<<endl;
    return;
    
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