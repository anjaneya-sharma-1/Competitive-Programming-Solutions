#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 998244353
 
void solve() {
    ll n,k,q;
    cin>>n>>k>>q;
    vector<vector<ll>>L(k);
    
    for(ll i=0;i<n;i++){
        for(ll j=0;j<k;j++){
            ll a;
            cin>>a;
            L[j].push_back(a);
            if(i>0){
                L[j][i]|=L[j][i-1];
            }
        }
    }
    for(ll i=0;i<q;i++){
        ll maxi=LLONG_MAX;
        ll mini=-1;
        ll m;
        cin>>m;
        for(ll j=0;j<m;j++){
            ll col,lim;
            char op;
            cin>>col>>op>>lim;
            if(op=='<'){
                ll upper=lower_bound(L[col-1].begin(),L[col-1].end(),lim)-L[col-1].begin();
                maxi=min(maxi,upper);
            }else{    
                ll lower=upper_bound(L[col-1].begin(),L[col-1].end(),lim)-L[col-1].begin();
                mini=max(mini,lower);
            }
        }
        
        if(mini==-1){
            mini=0;
        }
        
        if(mini>=maxi||mini>=n){
            cout<<-1<<endl;
            //cout<<mini<<maxi;
        }else{
            cout<<mini+1<<endl;
        }
    }
    
}
int main(){
    ll t=1;
    //cin >> t;
    while (t--) solve();
}