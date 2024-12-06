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
    
    vector<vector<ll>> v(m,vector<ll>(n));
    ll ans =0;
    for(int i =0;i<n;i++){
        for(int j=0;j<m;j++){

            ll curr;
            cin>>curr;
            v[j][i]=curr;
        }
    }
    for(int i =0;i<m;i++){
        sort(v[i].begin(),v[i].end());
        for(int k=1;k<n;k++){
            ans+=k*(n-k)*(v[i][k]-v[i][k-1]);
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