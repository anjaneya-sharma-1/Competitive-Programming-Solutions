#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
void solve() {
    ll n;
    vector<ll>v;
    cin>>n;
    ll sum=0;
    unordered_map<ll,vector<ll>>mp;
    for(int i =0;i<n;i++){
        ll curr;
        cin>>curr;
        v.push_back(curr);
        sum+=curr;
        mp[curr].push_back(i+1);
    }
    ll ans=0;
    set<ll>u;
    for(int i=0;i<n;i++){
        if(mp[sum-v[i]-v[i]].size()>0){
            for(int j=0;j<mp[sum-v[i]-v[i]].size();j++){
                if(mp[sum-v[i]-v[i]][j]!=i+1){
                    ans++;
                    u.insert(mp[sum-v[i]-v[i]][j]);
                }
            }
        }
    }
    cout<<u.size()<<endl;
    for(auto k:u){
        cout<<k<<" ";
    }
    
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