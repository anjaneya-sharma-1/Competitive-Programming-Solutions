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
    vector<ll> v(n);
    ll xorr=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        xorr^=v[i];
    }
    if(xorr==0){
        cout<<"YES"<<endl;
        return;
    }
    ll c=0;
    ll sum=0;
    ll x=0;
    for(int i=0;i<n;i++){
        x^=v[i];
        if(x==xorr){
            c++;
            x=0;
        }
    }
    if(c>=2){
        cout<<"YES"<<endl;
    }
    else{
        
        cout<<"NO"<<endl;
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