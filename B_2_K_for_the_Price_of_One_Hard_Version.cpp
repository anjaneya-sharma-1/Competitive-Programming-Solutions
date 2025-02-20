#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
void solve() {
    ll n,p,k;
    cin>>n>>p>>k;
    vector<ll>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
  vector<ll>pre(n);
  
    sort(v.begin(),v.end());
    pre[0]=v[0];
    for(int i=1;i<n;i++){
        pre[i]=pre[i-1]+v[i];
    }
  ll ans=0;
    vector<ll>f(n,0);
  
    for(ll i=0;i<n;i++){
      if(i<k-1){
        f[i]=pre[i];
        if(i+k<n){
          f[i+k]+=f[i];
        }
        if(f[i]<=p){
            ans=max(ans,i+1);
          }
       
      }
      else{
        f[i]+=v[i];
        if(f[i]<=p){
          ans=max(ans,i+1);
        }
       
        if(i+k<n){
            f[i+k]+=f[i];
          }
      }
    }
    cout<<ans<<endl;

}

};
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    ll t;
    cin>>t;


    while (t--){
        Solution* s = new Solution();
        s->solve();
        delete s;

        }
    return 0;
}