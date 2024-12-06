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
    vector<ll> p(n+1) ;
    vector<ll> dp(n+1,1);
    vector<ll> rs(n+1);
    for(int i =1;i<=n;i++){
        ll par,r;
        cin>>par>>r;
        p[i]=par;
        rs[i]=r;
    }
    for(int i =1;i<=n;i++){
        if(!rs[i]){
            dp[i]=0;
            if(p[i]!=-1){
            dp[p[i]]=0;}
            
        }
    }
    int c =1;
    for(int i=1;i<=n;i++){
        if(dp[i]==1){
            cout<<i<<" ";
            c=0;
        }
    }
    if(c){
        cout<<-1;
    }
    cout<<endl;

    
}

};
int main(){
    ll t=1;
    //cin >> t;
    
    while (t--){ 
        Solution* s = new Solution(); 
        s->solve();
        delete s; 

        }
    return 0;
}