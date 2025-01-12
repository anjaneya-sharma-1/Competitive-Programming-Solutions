#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
void solve() {
    ll n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    ll one=0;
    ll zero=0;
    ll l=0; 
    if(k%2){
        cout<<"NO"<<endl;
        return;
    }
    ll q=0;
    for(int r=0;r<k;r++){
        ll c1=0,c0=0,cq=0;
        for(int i=r;i<n;i+=k){
            if(s[i]=='1'){
                c1++;
            }
            else if(s[i]=='0'){
                c0++;
            }
            else{
                cq++;
            }
        }
        if(c1&&c0){
            cout<<"NO"<<endl;
            return;
        }
        else{
            if(c1){
                
                one++;
            }
            else if(c0){
               
                zero++;
            }
            else{
                q++;
            }
        }
        
    }
    if((one!=zero&&(q<(abs(one-zero))||(q-abs(one-zero))%2))){
        cout<<"NO"<<endl;
        return;
    }
    
    
    cout<<"YES"<<endl;
    
    
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