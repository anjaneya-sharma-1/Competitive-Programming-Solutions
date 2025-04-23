#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
void solve() {
    ll n,m;
    cin>>n>>m;
    ll z=(n*(n-1)/2)-m;
    ll maxi=0;
    for(int i=2;i<=n;i++){
        if(i*(i-1)/2>=z){
            ll tot=(i*(i-1)/2);
            ll val=i;
            val-=((tot-z)/(i-1) + ((tot-z)%(i-1)!=0));
            maxi=n-val;
            break;
        }
    }
    ll mini;
    if(z>n-1){
        mini=0;
    }
    else{
        mini=n-1-z;
    }
    ll count=maxi-mini+1;
    ll sum=count*(maxi+mini)/2;
    cout<<sum<<endl;

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