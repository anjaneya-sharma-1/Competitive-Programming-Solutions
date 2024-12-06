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
    ll gc1,gc2;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(i==0){
            gc1=a[i];
        }
        else if(i==1){
            gc2=a[i];
        }
        else if(i%2==0){
            gc1=__gcd(gc1,a[i]);
        }        
        else{
            gc2=__gcd(gc2,a[i]);
        }
    }
    int c=0;
    for(int i=1;i<n;i+=2){
        if(a[i]%gc1==0){
            c=1;
            break;
        }
    }
    if(!c){
    cout<<gc1<<endl;
    return ;}
    for(int i=0;i<n;i+=2){
        if(a[i]%gc2==0){
            cout<<0<<endl;
            return;
        }
    }
    cout<<gc2<<endl;
    
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