#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
    bool chck(ll n,ll k){
        ll sum=0;
        while(n>0){
            sum+=n%10;
            n/=10;
        }
        
        return (sum%k==0);
    }
void solve() {
    ll n,k;
    cin>>n>>k;
   
    ll i=n;
    while(chck(i,k)==0){
        i++;
    }
    cout<<i<<endl;
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