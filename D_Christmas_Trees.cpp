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
    vector<ll>x(n);
    map<ll,ll>mp;
    for(int i=0;i<n;i++){
        cin>>x[i];
        mp[x[i]]=1;
    }
    queue<pair<ll,ll>>q;
    for(int i=0;i<n;i++){
        ll l=x[i]-1;
        ll r=x[i]+1;
        if(!mp[l]){
            q.push({l,1});
            mp[l]=1;
        }
        if(!mp[r]){
            q.push({r,1});
            mp[r]=1;
        }
    }
    ll ans=0;
    vector<ll>res;
    while(!q.empty()&&m){
        ll pos=q.front().first;
        ll dist=q.front().second;
        m--;
        res.push_back(pos);
        q.pop();
        ans+=dist;
        ll l=pos-1;
        ll r=pos+1;
        if(!mp[l]){
            q.push({l,dist+1});
            mp[l]=1;
        }
        if(!mp[r]){
            q.push({r,dist+1});
            mp[r]=1;
        }
    
    }
    cout<<ans<<endl;
    for(auto e:res){cout<<e<<" ";}
    cout<<endl;
    
}

};
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    ll t=1;
    
    
    while (t--){ 
        Solution* s = new Solution(); 
        s->solve();
      

        }
    return 0;
}