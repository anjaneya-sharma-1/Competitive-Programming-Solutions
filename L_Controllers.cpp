#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
void solve() {
    ll k;
    cin>>k;
    string s;
    cin>>s;
    ll p=0;
    ll n=0;
    for(int i=0;i<k;i++){
        p+=(s[i]=='+');
        n+=(s[i]=='-');
    }
    if(p<n){
        swap(p,n);
    }
    ll m;
    cin>>m;
    for(int i=0;i<m;i++){
        ll a,b;
        cin>>a>>b;
        ll lc=lcm(a,b);
        ll o=lc/a;
        ll x=lc/b;
        ll y=0;
        ll z=0;
        
        if(o<x){
            swap(o,x);
        }
        while(p-y!=n-z&&y<=p&&z<=n){
            y+=o;
            z+=x;
        }
        if(y>p||z>n){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    cout<<endl;
    
}

};
int main(){
    ll t=1;
    
    
    while (t--){ 
        Solution* s = new Solution(); 
        s->solve();
        delete s; 

        }
    return 0;
}