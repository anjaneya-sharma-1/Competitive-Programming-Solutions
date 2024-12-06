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
    unordered_map<ll,ll> m;
    unordered_map<ll,ll> m2;
    unordered_map<ll,ll> m3;
    unordered_map<ll,ll> m4;
    priority_queue<vector<ll>,vector<vector<ll>>,greater<>>pq;
    for(int i=1;i<=n;i++){
        ll l,r;
        cin>>l>>r;
        if(m[r]==0){
            m[r]=l;
            m2[r]=i;
        }
        else{
            if(m[r]>=l){
                cout<<m2[r]<<" "<<i<<endl;
                return;
            }
            else{
                cout<<i<<" "<<m2[r]<<endl;
                return;
            }}

        if(m3[l]==0){
            m3[l]=r;
            m4[l]=i;
        }
        else{
            if(m3[l]<=r){
                cout<<m4[l]<<" "<<i<<endl;
                return;
            }
            else{
                cout<<i<<" "<<m4[l]<<endl;
                return;
            }}
        
        pq.push({l,r,i});
    }
    
    ll maxi=-1;
    while(!pq.empty()){
        vector<ll>curr=pq.top();
        pq.pop();
        if(curr[1]<=maxi){
            cout<<curr[2]<<" "<<m2[maxi]<<endl;
            return;
        }
        else{
            maxi=curr[1];
        }
    }
    cout<<-1<<" "<<-1<<endl;
    
}

};
int main(){
    ll t=1;
    //cin >> t;
    
    while (t--){ 
        Solution* s = new Solution(); 
        s->solve();
        delete s; 

        }
    return 0;
}