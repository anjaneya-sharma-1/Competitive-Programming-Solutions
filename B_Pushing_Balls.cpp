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
    vector<vector<ll>> grid(n,vector<ll>(m));
    for(ll i=0;i<n;i++){
        string s;
        cin>>s;
        for(ll j=0;j<m;j++){
            grid[i][j]=s[j]-'0';
        }
    }
    vector<vector<ll>>rowPrefix(n,vector<ll>(m));
    vector<vector<ll>>colPrefix(m,vector<ll>(n));
    for(ll i=0;i<n;i++){
        for(ll j=0;j<m;j++){
            if(j==0){
                rowPrefix[i][j]=grid[i][j];
            }
            else{
                rowPrefix[i][j]=rowPrefix[i][j-1]+grid[i][j];
            }
        }
    }
    for(ll i=0;i<m;i++){
        for(ll j=0;j<n;j++){
            if(j==0){
                colPrefix[i][j]=grid[j][i];
            }
            else{
                colPrefix[i][j]=colPrefix[i][j-1]+grid[j][i];
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(grid[i][j]==1){
                if(rowPrefix[i][j]==j+1||colPrefix[j][i]==i+1){
                    continue;
                }
                else{
                    cout<<"NO"<<endl;
                    return;
                }
            }
        }
        
    }
    cout<<"YES"<<endl;
    
}

};
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    ll t;
    cin >> t;
    
    
    while (t--){ 
        Solution* s = new Solution(); 
        s->solve();
      

        }
    return 0;
}