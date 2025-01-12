#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
void solve() {
    ll n,a,b,c;
    cin>>n>>a>>b>>c;
    ll ans=0;
    ans+=3*(n/(a+b+c));
    n%=(a+b+c);
    if(n==0){
        cout<<ans<<endl;
        return;
    }
    if(a>=n){
        cout<<ans+1<<endl;
        return;
    }
    if(a+b>=n){
        cout<<ans+2<<endl;
        return;
    }
    if(a+b+c>=n){
        cout<<ans+3<<endl;
        return;
    }


    
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