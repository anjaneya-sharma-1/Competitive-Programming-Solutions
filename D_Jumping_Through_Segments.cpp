#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
    bool chck(vector<vector<ll>>&v,ll mid){
        ll l=-mid;
        ll r=mid;
        for(int i=0;i<v.size();i++){
            if(v[i][0]>r){
                return false;
            }
            if(v[i][1]<l){
                return false;
            }
            if(v[i][0]>l){
                l=max(l,v[i][0]);
            }
            
            if(v[i][1]<r){
                r=min(r,v[i][1]);
            }
           
            l-=mid;
            r+=mid;
        }
        return true;
    }
void solve() {
    ll n;
    cin>>n;
    vector<vector<ll>>v;
    ll maxi=0;
    for(int i=0;i<n;i++){
        ll x,y;
        cin>>x>>y;
        v.push_back({x,y});
        maxi=max(maxi,y);

    }
    ll l=0;
    ll r=maxi;
    //cout<<r<<"-";
    ll ans=0;
    while(l<=r){
        ll mid=(l+r)/2;
        if(chck(v,mid)){
            ans=mid;
            r=mid-1;
        }
        else{
            //cout<<mid<<" ";
            l=mid+1;
        }
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