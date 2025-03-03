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
    vector<string> s(n);
    for(ll i=0;i<n;i++){
        cin>>s[i];
    }
    vector<vector<ll>> adj(26,vector<ll>(26,0));
    for(ll i=0;i<n-1;i++){
        ll j=0;
        while(j<s[i].size() && j<s[i+1].size() && s[i][j]==s[i+1][j]){
            j++;
        }
        if(j==s[i].size()){
            continue;
        }
        if(j==s[i+1].size()){
            cout<<"Impossible";
            return;
        }
        adj[s[i][j]-'a'][s[i+1][j]-'a']=1;
    }
    vector<ll> vis(26,0);
    vector<ll> order;
    function<void(ll)> dfs=[&](ll u){
        vis[u]=1;
        for(ll i=0;i<26;i++){
            if(adj[u][i]){
                if(vis[i]==1){
                    cout<<"Impossible";
                    exit(0);
                }
                if(vis[i]==0){
                    dfs(i);
                }
            }
        }
        vis[u]=2;
        order.push_back(u);
    };
    for(ll i=0;i<26;i++){
        if(vis[i]==0){
            dfs(i);
        }
    }
    reverse(order.begin(),order.end());
    for(ll i=0;i<26;i++){
        for(ll j=i+1;j<26;j++){
            if(adj[order[j]][order[i]]){
                cout<<"Impossible";
                return;
            }
        }
    }
    for(auto i:order){
        cout<<(char)(i+'a');
    }
    
    
}

};
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    ll t=1;
    
    
    while (t--){ 
        Solution* s = new Solution(); 
        s->solve();
        delete s; 

        }
    return 0;
}