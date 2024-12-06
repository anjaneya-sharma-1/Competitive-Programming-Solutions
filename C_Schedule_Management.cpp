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
    vector<ll>v(n);
    ll count =0LL;
    for(int i=0;i<m;i++){
        ll curr;
        cin>>curr;
        curr--;
        v[curr]++;
    }
    ll l=0;
    ll r=m;
    while(l<r){
        ll mid =(l+r)/2;
        ll t=0;
        ll w=0;
        for(ll i=0;i<n;i++){
            if(v[i]<=mid){
                t+=(mid-v[i])/2;
            }
            else{
                w+=(v[i]-mid);          
            }
        }
        if(w>t){
            l=mid+1;
        }
        else{
            r=mid;
        }
    }
    
    cout<<l<<endl;
    
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