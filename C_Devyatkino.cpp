#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
void solve() {
    ll n;
    cin>>n;
    ll ans=10;
    for(int i=0;i<10;i++){
        ll num = n;
        ll d=0;
        for(int j=0;j<i;j++){
            d+=9;
            d*=10;
        }
        d/=10;
        for(ll j=0;j<=10;j++){
            
            ll temp = num;
            ll t=0;
            ll f=0;
            while(temp){
                if(temp%10==7){
                    ans=min(ans,j);
                    f=1;
                    break;
                }
                temp/=10;
            }
            num+=d;
            //cout<<num<<endl;
            if(f==1){
                break;
            }
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