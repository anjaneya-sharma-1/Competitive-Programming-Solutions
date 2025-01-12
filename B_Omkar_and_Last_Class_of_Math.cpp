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
    ll maxi=1;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            maxi=max(maxi,n/i);
        }
    }
    cout<<maxi<<" "<<n-maxi<<endl;
    
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