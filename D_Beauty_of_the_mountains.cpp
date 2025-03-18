#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
    
void solve() {
    ll n,m,k;
    cin>>n>>m>>k;
    vector<vector<ll>>grid(n+1,vector<ll>(m+1));
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>grid[i][j];
        }
    }
    vector<vector<ll>>hasSnow(n+1,vector<ll>(m+1));
    ll snowSum=0;
    ll noSnowSum=0;
    for(int i=1;i<=n;i++){
        string s;
        cin>>s;
        for(int j=1;j<=m;j++){
            hasSnow[i][j]=(s[j-1]-'0');
            if(hasSnow[i][j]){
                snowSum+=grid[i][j];
              
            }
            else{
                noSnowSum+=grid[i][j];
            }
        }
    }
    if(snowSum==noSnowSum){
        cout<<"YES"<<endl;
        return;
    }
    ll target=abs(noSnowSum-snowSum);
    vector<vector<ll>>pre(n+1,vector<ll>(m+1,0));
    for(ll i=1;i<=n;i++){
        for(ll j=1;j<=m;j++){
            pre[i][j]=pre[i][j-1]+pre[i-1][j]-pre[i-1][j-1]+(hasSnow[i][j]==1?1:-1);
        }
    }
    ll gc=0;
    for(ll i=1;i<=n;i++){
        for(ll j=1;j<=m;j++){
            if(i>=k&&j>=k){
                ll sum=pre[i][j]-pre[i-k][j]-pre[i][j-k]+pre[i-k][j-k];
                gc=__gcd(gc,abs(sum));
            }
        }
    }
    if(gc==0){
        cout<<"NO"<<endl;
        return;
    }
    else if(target%gc==0){
        cout<<"YES"<<endl;
        return;
    }
    
    cout<<"NO"<<endl;
}

};
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    ll t;
    cin >> t;
    Solution* s = new Solution(); 
    
    while (t--){ 
       
        s->solve();
     

        }
    return 0;
}