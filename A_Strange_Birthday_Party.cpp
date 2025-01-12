#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
void solve() {
    ll n,m;
    cin>>n>>m;
    vector<ll>v(n);
    vector<ll>u(m);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=0;i<m;i++){
        cin>>u[i];
    }
    ll ans=0;
    ll j=0;
    sort(v.begin(),v.end());
    for(int i=n-1;i>=0;i--){
        if(j>=v[i]-1||j>=m){
            ans+=u[v[i]-1];
        }
        else{
            ans+=u[j];
            j++;
        }
    }
    cout<<ans<<endl;
    
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