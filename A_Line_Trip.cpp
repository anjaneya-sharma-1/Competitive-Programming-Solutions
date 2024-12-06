#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
void solve() {
    ll maxi=0;
    ll n,x;
    cin>>n>>x;
    vector<ll> v(n+1,0);
    for(int i=1;i<=n;i++){
        cin>>v[i];
        maxi=max(maxi,v[i]-v[i-1]);
    }
    maxi=max(maxi,2*(x-v[n]));
    cout<<maxi<<endl;
    
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