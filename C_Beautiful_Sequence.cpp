#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 998244353
class Solution{
    public:
void solve() {
    ll n;
    cin>>n;
    vector<ll>v(n);
    for(ll i=0;i<n;i++){
        cin>>v[i];
    }
    ll ans=0;
    ll curr=0;
    ll ok=0;
    ll count=0;
    ll buff=0;
    for(int i=0;i<n;i++){
        if(v[i]==1){
            ok=1;
            buff++;
        }
        else if(v[i]==2&&ok){
            curr=(curr*2)%MOD;
            if(buff){
                curr=(curr+(2*buff)%MOD)%MOD;
                count+=buff;
                buff=0;
            }
            curr%=MOD;
        }
        else if(v[i]==3){
            ans+=curr-count;
            ans%=MOD;
        }
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