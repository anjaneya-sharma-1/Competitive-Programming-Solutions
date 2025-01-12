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
    vector<ll> a(n);
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    ll ok=0;
    for(ll i=0;i<n;i++){
        if(i==0){
            if(a[i]<2*a[i+1]&&a[i]>a[i+1]){
                ok=1;
                break;
            }
            if(a[i]==a[i+1]){
            ok=1;
            break;
        }
            continue;
        }
        if(i==n-1){
            if(a[i]<2*a[i-1]&&a[i]>a[i-1]){
                ok=1;
                break;
            }
            if(a[i]==a[i-1]){
            ok=1;
            break;
        }
            continue;
        }
        if(a[i]==a[i-1]||a[i]==a[i+1]){
            ok=1;
            break;
        }
        if((a[i]<2*a[i-1]&&a[i]>a[i-1])||(a[i]<2*a[i+1]&&a[i]>a[i+1])){
            ok=1;
            break;
        }
    }
    if(ok){
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