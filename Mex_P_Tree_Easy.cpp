#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 20000
#define MOD 1000000007
class Solution{
    public:
    vector<ll>primes;
    Solution(){
        sieve();
    }
    void sieve(){
        vector<bool>is_prime(N+1,true);
        is_prime[0]=is_prime[1]=false;
        for(ll i=2;i*i<=N;i++){
            if(is_prime[i]){
                for(ll j=i*i;j<=N;j+=i){
                    is_prime[j]=false;
                }
            }
        }
        for(ll i=2;i<=N;i++){
            if(is_prime[i]){
                primes.push_back(i);
            }
        }
    }
    ll gcToMex(ll gc){
        for(ll i=0;i<primes.size();i++){
            if(gc%primes[i]!=0){
                return primes[i];
            }
        }
    }
void solve() {
    ll n;
    cin>>n;
    vector<ll>arr(n+1);
    for(ll i=0;i<n;i++){
        cin>>arr[i+1];
    }
    vector<vector<ll>>adj(n+1);
    for(ll i=0;i<n-1;i++){
        ll u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<ll>ans(n+1,0);
    for(ll u=1;u<=n;u++){
        vector<ll>vis(n+1,0);
        vis[u]=1;
        queue<pair<ll,ll>>q;
        q.push({u,arr[u]});
        while(!q.empty()){
            ll curr=q.front().first;
            ll gc=q.front().second;
            q.pop();
            ans[u]+=gcToMex(gc);
            for(auto x:adj[curr]){
                if(!vis[x]){
                    vis[x]=1;
                    q.push({x,__gcd(gc,arr[x])});
                }
            }
        }
    }
    for(ll i=1;i<=n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    
    
}

};
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    ll t;
    cin >> t;
    
    Solution* s = new Solution(); 
    while (t--){ 
       
        s->solve();
         

        }
    return 0;
}