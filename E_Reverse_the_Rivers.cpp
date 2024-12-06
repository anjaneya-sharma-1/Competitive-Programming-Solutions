#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 998244353
 
void solve() {
    ll r,c,q;
    cin>>r>>c>>q;
    vector<vector<ll>>L(c);
    
    for(ll i=0;i<r;i++){
        for(ll j=0;j<c;j++){
            ll a;
            cin>>a;
            L
        }
    }
    for(ll i=0;i<q;i++){
        ll maxi=INT_MIN;
        ll mini=INT_MAX;
        ll m;
        cin>>m;
        for(ll j=0;j<m;j++){
            ll col,lim;
            char op;
            cin>>col>>op>>lim;
            if(op=='<'){
                ll upper=upper_bound(L[col-1].begin(),L[col-1].end(),lim-1)-L[col-1].begin();
                maxi=max(maxi,upper);
            }else{    
                ll lower=lower_bound(L[col-1].begin(),L[col-1].end(),lim+1)-L[col-1].begin();
                mini=min(mini,lower+1);
            }
        }
        if(maxi==INT_MIN){
            maxi=r;
        }
        if(mini==INT_MAX){
            mini=1;
        }
        
        if(maxi<mini){
            cout<<-1<<endl;
        }else{
            cout<<mini<<endl;
        }
    }
    
}
int main(){
    ll t=1;
    //cin >> t;
    while (t--) solve();
}