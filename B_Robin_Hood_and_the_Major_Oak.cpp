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
    if(k>=n){
        ll sum = n*(n+1)/2;
        cout<<(sum%2?"NO":"YES")<<endl;
    }
    else{
        ll sum=n*(n+1)/2;
        sum-=(n-k)*(n-k+1)/2;
        
        cout<<(sum%2?"NO":"YES")<<endl;
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