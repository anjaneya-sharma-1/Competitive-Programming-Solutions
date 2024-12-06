#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
    ll ans =0;
    map<ll,vector<ll>> m ;
    map<ll,pair<ll,ll>> total;
    pair<ll,ll> dfs(string &s, ll  x){
        //cout<<x<<" ";
        if(total.find(x)!=total.end()){
            return total[x];
        }
        if(m[x].empty()){
            if(s[x-1]=='B'){return {1,0};}
            return {0,1};
        }
        ll b=0+(s[x-1]=='B');
        ll w=0+(s[x-1]=='W');
        for(int i=0;i<m[x].size();i++){
            auto p = dfs(s,m[x][i]);
            b+=p.first;
            w+=p.second;
        }
        ans+=(b==w);
        total[x]={b,w};
        return total[x];
    }
void solve() {
    ll n;
    cin>>n;
    for(int i =2;i<=n;i++){
        ll curr;
        cin>>curr;
        m[curr].push_back(i);
    }
    string s;
    cin>>s;
    dfs(s,1);
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