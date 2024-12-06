#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
ll gc(ll a){
    ll ans=1;
    for(ll i=2;i*i<=a;i++){
        if(a%i==0){
            ans=i;
            break;
        }
    }
    return a/ans;
}
void solve() {
    ll n;
    cin>>n;
    ll a,b,c,d,e;
    set<ll> s;
    
    if(a==1||b==1||c==1){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
        cout<<a<<" "<<b<<" "<<c<<endl;
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