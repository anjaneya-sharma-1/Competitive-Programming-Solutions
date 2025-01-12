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
    vector<ll>v;
    ll c=0;
    vector<ll>bits(32,0);
    for(int i =0;i<n;i++){
        ll curr;
        cin>>curr;

        v.push_back(curr);
        if(curr==0){
            c++;
        }
        ll bit=0;
            while(curr>0){
                if(curr&1){
                    bits[bit]++;
                }
                bit++;
                curr>>=1;
            }
        
    }
    if(c==n){
        for(int i=1;i<=n;i++){
            cout<<i<<" ";
        }
        cout<<endl;
        return;
    }
    ll gc=-1;
    for(int i=0;i<32;i++){
        if(bits[i]>0&&gc==-1){
            gc=bits[i];
        }
        else if(bits[i]>0){
            gc=__gcd(gc,bits[i]);
        }
    }
    for(int i=1;i<=gc;i++){
        if(gc%i==0){
                cout<<i<<" ";
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