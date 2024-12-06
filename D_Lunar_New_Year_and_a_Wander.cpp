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
    priority_queue<ll,vector<ll>,greater<>>pq;
    vector<vector<ll>>adj(n+1);
    vector<ll>v(n+1,0);
    for(int i=0;i<m;i++){
        ll a ,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    pq.push(1);
    while(!pq.empty()){
        ll curr=pq.top();
        v[curr]=1;
        cout<<curr<<" ";
        pq.pop();
        for(auto a:adj[curr]){
            if(!v[a]){
                pq.push(a);
                 v[a]=1;
            }
        }
    }
    cout<<endl;
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