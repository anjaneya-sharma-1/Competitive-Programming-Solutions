#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
void solve() {
    ll x,m;
    cin>>x>>m;
    ll sum=0;
    for(ll i=1;i<=2*x;i++){
        ll z=x^i;
        if(i%z==0||x%z==0){
            sum++;
        }
    }
    cout<<sum<<endl;
    
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