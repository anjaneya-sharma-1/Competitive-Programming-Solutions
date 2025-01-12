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
    vector<ll> v(n);
    vector<ll>u(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=0;i<n;i++){
        cin>>u[i];
    }
    vector<ll>c(n,0);
    unordered_map<ll,vector<ll>>mp;
    vector<ll>p(n,0);
    p[0]=u[0];
    for(int i=1;i<n;i++){
        p[i]=p[i-1]+u[i];
    }
    for(int i=0;i<n;i++){
        ll l=lower_bound(p.begin()+i,p.end(),v[i]+(i==0?0:p[i-1]))-p.begin();
        if(l!=n){
            c[l]--;
            mp[l].push_back(i);
        }
    }
    c[0]++;
    //cout<<c[0]<<" ";
    for(int i=1;i<n;i++){
        c[i]+=c[i-1]+1;
        //cout<<c[i] <<" ";
    }
    for(int i=0;i<n;i++){
        ll tot=0;
        tot+=u[i]*c[i];
        if(mp[i].size()>0){
            ll sum=0;
            for(int j=0;j<mp[i].size();j++){
                sum+=v[mp[i][j]]+(mp[i][j]==0?0:p[mp[i][j]-1])-(i!=0?p[i-1]:0);
            }
            tot+=sum;
        }
        cout<<tot<<" ";
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