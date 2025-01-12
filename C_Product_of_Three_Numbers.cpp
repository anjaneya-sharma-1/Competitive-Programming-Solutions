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
    for(int i=2;i<sqrt(n);i++){
        if(n%i==0){
            ll m=n/i;
            for(int j=i+1;j<sqrt(m);j++){
                if(m%j==0){
                    cout<<"YES"<<endl;
                    cout<<i<<" "<<j<<" "<<m/j<<endl;
                    return;
                }
            }
        }
    }
    cout<<"NO"<<endl;
    
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