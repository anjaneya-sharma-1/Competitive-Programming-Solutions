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
    vector<ll>ans(n);
    vector<string>adj(n+1);
    for(int i=1;i<=n;i++){
        string s;
        cin>>s;
        adj[i]=s;
    }
  
    for(int i=n;i>=1;i--){
        ll count=0;
        for(int j=0;j<n;j++){
            if(j+1<i&&adj[i][j]=='1'){
                count++;
            }
            if(j+1>i&&adj[i][j]=='0'){
                count++;
            }
        }
        ans[count]=i;
    }   
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    
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
        delete s; 

        }
    return 0;
}