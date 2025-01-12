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
    vector<ll>v;
    vector<ll>u;
    unordered_map<ll,ll>mp;
    for(int i=0;i<n;i++){
        ll curr;
        cin>>curr;
        v.push_back(curr);
        
    }
    for(int i=0;i<n;i++){
        ll curr;
        cin>>curr;
        u.push_back(curr);
        mp[curr]=i;

    }
   
    ll ans=0;
    ll maxi=0;
    for(int i=0;i<n;i++){
        v[i]=mp[v[i]];
        maxi=max(maxi,v[i]);
        if(v[i]<maxi){
            ans++;}
    }
    
    cout<<ans<<endl;
    
}

};
int main(){
    ll t=1;

    
    while (t--){ 
        Solution* s = new Solution(); 
        s->solve();
        delete s; 

        }
    return 0;
}