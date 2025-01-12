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
    vector<ll>p(n+1,n+1);
    
    for(int i =0;i<m;i++){
        ll x,y;
        cin>>x>>y;
        if(x>y){
            swap(x,y);
        }
       if(p[x]==-1){
           p[x]=y;
       }
       else{
           p[x]=min(p[x],y);
       }
    }
    ll ans=0;
    for(int i=n-1;i>=1;i--){
        p[i]=min(p[i],p[i+1]);
    }
    for(int i=1;i<=n;i++){
        ans+=p[i]-i;
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