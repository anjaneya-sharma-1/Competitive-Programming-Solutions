#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
void solve() {
    ll n,k;
    cin>>n>>k;
    if(n==1){
        cout<<1<<endl;
        return;
    }
    if(k%2==0){
        
            
            for(ll j=1;j<=n;j++){
                if(j==n-1){
                    cout<<n<<" ";
                    continue;
                }
                cout<<n-1<<" ";
            }
            cout<<endl;
        
    }
    else{
        for(ll i=1;i<n;i++){
            cout<<n<<" ";
        }
        cout<<n-1<<" ";
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
        delete s; 

        }
    return 0;
}