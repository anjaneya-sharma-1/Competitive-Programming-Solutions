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
    map<ll,ll>v;
    for(int i =0;i<n;i++){
        ll curr;
        cin>>curr;
        
        ll modd =curr%k;
        if(modd!=0){
            v[k-modd]++;
        }
    }
    ll total =0;
    ll x= 0;
    for(auto [key, value] : v){
        total=max(total,key+(value-1)*k+1);
    }
    cout<<total<<endl;
    
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