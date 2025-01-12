#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
void solve() {
    int n;
    cin>>n;
    vector<ll>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    ll k=v[n-1];
    int c=0;
    ll ans=0;
    for(int i=n-1;i>=0;i--){
        if(v[i]==k){
            c++;
        }
        else{
            i-=(c-1);
            c*=2;
            ans++;
            
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