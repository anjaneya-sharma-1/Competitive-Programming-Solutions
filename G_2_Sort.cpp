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
    vector<ll>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    ll ans=0;
    ll c=1;
    for(int i=n-2;i>=0;i--){
        if(v[i]<2*v[i+1]){
            c++;
        }
        else{
            if(c>=k){
                ans+=c-k;
            }
            c=1;
        }
    }
    if(c>=k){
        ans+=c-k;
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