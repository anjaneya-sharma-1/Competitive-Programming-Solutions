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
    ll ans=0;
    ll count=0;
    ll par=-1;
    for(int i=0;i<n;i++){
        ll x;
        cin>>x;
        if(count==0){
            par=x%2;
            count=1;
        }
        else{
            if(par==x%2){
                count++;
            }
            else{
                ans+=count-1;
                count=1;
                par=x%2;
            }
        }
    }
    if(count){
        ans+=count-1;
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
      

        }
    return 0;
}