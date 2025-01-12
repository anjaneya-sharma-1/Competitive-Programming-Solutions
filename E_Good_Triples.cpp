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
    vector<ll> pre={1,3,6,10,15,21,28,36,45,55};
    ll ans=1;
    while(n>0){
        ans*=pre[n%10];
        n/=10;
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