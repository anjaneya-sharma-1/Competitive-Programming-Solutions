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
    vector<ll>ind;
    vector<vector<ll>>u(n+1);
    for(int i=0;i<n;i++){
        ll a;
        cin>>a;
        ind.push_back(a);
    }
    for(int i=0;i<n;i++){
        ll a;
        cin>>a;
        u[ind[i]].push_back(a);
    }
    for(int i=1;i<=n;i++){
        sort(u[i].begin(),u[i].end());
    }
    vector<ll>ans(n+1,0);
    for(int i=1;i<=n;i++){
        for(int j=1;j<u[i].size();j++){
            u[i][j]+=u[i][j-1];
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=u[i].size();j++){
            ll x=u[i].size()%j;
            ll y=u[i].size()/j;
            if(x==0){
                ans[j]+=u[i][u[i].size()-1];
            }
            else{
                ans[j]+=u[i][u[i].size()-1]-u[i][x-1];
            }
        }
    }
    for(int i=1;i<=n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;

    
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