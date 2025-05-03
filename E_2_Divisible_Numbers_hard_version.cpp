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
    vector<ll> diva,divb;  
    for(ll i=1;i*i<=a;i++){
        if(a%i==0){
            diva.push_back(i);
            if(i*i!=a) diva.push_back(a/i);
        }
    }
    for(ll i=1;i*i<=b;i++){
        if(b%i==0){
            divb.push_back(i);
            if(i*i!=b) divb.push_back(b/i);
        }
    }
    for(auto i:diva){
        for(auto j:divb){
            ll s=(a*b)/(i*j);
            ll g=(i*j);
            ll x=c/g*g;
            ll y=d/s*s;
            if(a<x && b<y){
                cout<<x<<' '<<y<<endl;
                return;
            }
        }
    }
    cout<<"-1 -1\n";
    
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