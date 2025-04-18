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
    vector<vector<ll>>adj(n+1);
    vector<vector<ll>>radj(n+1);
    vector<ll>deg(n+1,0);
    for(int i=1;i<=n;i++){
        ll x;
        cin>>x;
        if(x!=0){
            while(x--){
                ll a;
                cin>>a;
                adj[a].push_back(i);
                radj[i].push_back(a);
                deg[i]++;
            }
        }
    }
    queue<pair<ll,ll>>q;
   vector<ll>srtd;
    map<ll,ll>level;
    for(int i =1;i<=n;i++){
        if(deg[i]==0){
            q.push({i,0});
            level[i]=0;
            srtd.push_back(i);
        }
    }
    ll count=q.size();
    while(!q.empty()){
        ll curr=q.front().first;
        ll clevel=q.front().second;
        q.pop();
        for(auto x:adj[curr]){
            deg[x]--;
            if(deg[x]==0){
                level[x]=clevel+1;
                q.push({x,level[x]});
                count++;
                srtd.push_back(x);
            }
        }
    }
    if(count<n){
        cout<<-1<<endl;
        return;
    }
    ll ans=1;
    vector<ll>res(n+1);
    for(auto i:srtd){
        ll temp=1;
        for(auto x:radj[i]){
            if(x<i){
                temp=max(temp,res[x]);
            }
            else{
                temp=max(temp,res[x]+1);
            }
        }
        res[i]=temp;
        ans=max(temp,ans);


    }
    cout<<ans<<endl;
    
    
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
      

        }
    return 0;
}