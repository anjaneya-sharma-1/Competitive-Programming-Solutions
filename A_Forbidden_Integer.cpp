#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
void solve() {
    ll x,n,k;
    cin>>n>>k>>x;
    if(x!=1){
        cout<<"YES"<<endl;
        cout<<n<<endl;
        for(int i=1;i<=n;i++){
            cout<<1<<" ";
        }
        cout<<endl;
    }
    else{
        if(n==1){
            cout<<"NO"<<endl;
            return;
        }
        if(n%2&&k<3){
            cout<<"NO"<<endl;
            return;
        }
        if(k<2){
            cout<<"NO"<<endl;
            return;
        }
        cout<<"YES"<<endl;
        cout<<n/2<<endl;
        while(n){
            if(n==3){
                cout<<3<<endl;
                return;
            }
            n-=2;
            cout<<2<<" ";
        }
        cout<<endl;

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