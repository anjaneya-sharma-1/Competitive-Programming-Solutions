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
    vector<ll>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<vector<ll>>b(n,vector<ll>(m+1,0));
    for(int i=0;i<n;i++){
        if(a[i]==0){
            if(i==0){
                for(int j=1;j<=m;j++){
                    b[i][j]=1;
                }
            }
            else{
                for(int j=1;j<=m;j++){
                    if(j-1>=1){
                        b[i][j]=b[i-1][j-1];
                    }
                    if(j+1<=m){
                        b[i][j]+=b[i-1][j+1];
                    }
                    b[i][j]+=b[i-1][j];
                    b[i][j]%=MOD;
                }
            }
        }
        else{
            if(i==0){
                b[i][a[i]]=1;
            }
            else{
                if(a[i]-1>=1){
                    b[i][a[i]]=b[i-1][a[i]-1];
                }
                if(a[i]+1<=m){
                    b[i][a[i]]+=b[i-1][a[i]+1];
                }
                b[i][a[i]]+=b[i-1][a[i]];
                b[i][a[i]]%=MOD;
            }
        }
    }
    ll ans=0;
    
    for(int i=1;i<=m;i++){
        ans+=b[n-1][i];
        ans%=MOD;
    }
    cout<<ans<<endl;
}

};
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    ll t=1;
    
    
    while (t--){ 
        Solution* s = new Solution(); 
        s->solve();
        delete s; 

        }
    return 0;
}