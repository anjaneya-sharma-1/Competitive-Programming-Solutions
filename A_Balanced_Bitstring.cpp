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
    ll ans=0;
    ll l=0;
    ll c1=0,c0=0,cq=0;
    for(int r=0;r<k;r++){
        if(s[r]=='1'){
            c1++;
        }
        else if(s[r]=='0'){
            c0++;
        }
        else{
            cq++;
        }
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