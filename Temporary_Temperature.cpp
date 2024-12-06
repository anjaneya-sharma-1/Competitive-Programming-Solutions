#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
    ll mini=LLONG_MAX;
    bool chck(ll m,vector<ll>v,ll n,ll k){
        ll sum=0;
        ll l=0;
        ll maxi=0;
        ll mi=LLONG_MAX;
        for(ll i=0;i<n;i++){
            maxi=max(maxi,v[i]);
            mi=min(mi,v[i]);
            if((maxi-mi>2*m)){
                if(k==0){
                    return 0;
                }
                
                k--;
                l=i;
                sum=0;
                maxi=v[i];
                mi=v[i];
            }
            sum+=v[i];
            
        }
        mini=min(m,mini);
        return 1;
    }
void solve() {
    ll n,k;
    cin>>n>>k;
    vector<ll>v;
    ll maxi=0;
    for(int i=0;i<n;i++){
        ll curr;
        cin>>curr;
        v.push_back(curr);
        maxi=max(curr,maxi);
    }
    mini=maxi;
    ll l=0;
    ll r=maxi;
    while(l<r){
        ll m =(l+r)/2;
        //cout<<m<<" ";
        if(chck(m,v,n,k)){
            r=m;
        }
        else{
            l=m+1;
        }
    }
    cout<<mini<<endl;
    
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