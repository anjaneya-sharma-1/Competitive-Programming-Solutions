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
    vector<ll>v(n);
    ll ans=-1;
    for(int i=0;i<n;i++){
        cin>>v[i];
        if(v[i]!=i){
            if(ans==-1){
                ans=i;
            }
            else{
                ans&=i;
            }
        }
    }
    cout<<ans<<endl;



    
}

};
int main(){
    ll t;
    cin >> t;
    
    while (t--){ 
        Solution* s = new Solution(); 
        s->solve();
        delete s; 

        }
    return 0;
}