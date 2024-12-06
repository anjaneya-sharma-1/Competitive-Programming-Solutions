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
    if(n%2==0){
        cout<<(n/2 + 1)*(n/2 + 1)<<endl;
    }else{
        cout<<2*(n/2+1)*(n/2+2)<<endl;
    }
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