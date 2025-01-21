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
    int tot=n*m;
    vector<pair<ll,ll>>c(tot+1,{-1,-1});
    vector<vector<ll>>b(n,vector<ll>(m));
    vector<vector<ll>>a(n,vector<ll>(m));
    for(ll i=0;i<n;i++){
        for(ll j=0;j<m;j++){
            cin>>a[i][j];
            c[a[i][j]]={i,j};
        }
        
    }
    
    ll chck=1;
    for(ll i=0;i<n;i++){
        ll col=-1;
        for(ll j=0;j<m;j++){
            cin>>b[i][j];
            if(chck==0){
                continue;
            }
            if(col==-1){
                col=c[b[i][j]].first;
            }
            else{
                chck=(col==c[b[i][j]].first);
            }
        }

       
    }
    if(chck==0){
        cout<<"NO"<<endl;
        return;
    }
    for(int i=0;i<m;i++){
        ll row=-1;
        for(int j=0;j<n;j++){
            if(chck==0){
                continue;
            }
            if(row==-1){
                row=c[b[j][i]].second;
            }
            else{
                chck=(row==c[b[j][i]].second);
            }
        }
    }
    if(chck==0){
        cout<<"NO"<<endl;
        return;
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
        delete s; 

        }
    return 0;
}