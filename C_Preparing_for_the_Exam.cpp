#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
void solve() {
    ll n,m,k;
    cin>>n>>m>>k;
    vector<ll>v(n+1,0);
    vector<ll>u;
    for(int i=1;i<=m;i++){
        ll a;
        cin>>a;
        u.push_back(a);
    }
    for(int i=0;i<k;i++){
        ll a;
        cin>>a;
        v[a]=1;
    }
    string ans="";
    ll c=0;
    for(int i=1;i<=n;i++){
        if(v[i]==0){
            c++;
        }
    }
    if(c>1){
        for(int i=0;i<m;i++){
            ans+='0';
        }
        cout<<ans<<endl;
        return;
    }
    if(c==0){
        for(int i=0;i<m;i++){
            ans+='1';
        }
        cout<<ans<<endl;
        return;
    }
    else{
        for(int i=0;i<m;i++){
            if(v[u[i]]==0){
                ans+='1';
            }
            else{
                ans+='0';
            }
        }
        cout<<ans<<endl;
    }

    
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