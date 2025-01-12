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
    ll zero=0;
    ll one=0;
    vector<ll> v(n);
    vector<ll>p(n+1,0);
    for(int i=0;i<n;i++){
        cin>>v[i];
        p[i+1]=p[i]^v[i];
    }
    string s;
    cin>>s;
    for(int i=0;i<n;i++){
        if(s[i]=='0'){
            zero^=v[i];
        }
        else{
            one^=v[i];
        }
    }
    ll q;
    cin>>q;
    while(q--){
        ll t;
        scanf("%lld",&t);
        if(t==1){
            ll l,r;
            cin>>l>>r;
            zero^=p[r]^p[l-1];
            one^=p[r]^p[l-1];
        }
        else{
            ll l;
            cin>>l;
            if(l==1){
                cout<<one<<" ";
            }
            else{
                cout<<zero<<" ";
            }
        }
    }
    cout<<endl;
    
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