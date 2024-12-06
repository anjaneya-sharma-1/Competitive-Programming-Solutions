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
    ll count=0;
    ll maxi=0;
    vector<ll> v(n+1,0);
    for(int i =0;i<n;i++){
        ll curr;
        cin>>curr;
        v[curr]++;
        maxi=max(maxi,v[curr]);
        
        
    }
    cout<<n-maxi<<endl;
    
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