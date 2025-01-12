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
    vector<ll> out(n+1,0);
    vector<ll> in(n+1,0);
    vector<vector<ll>>edges;
    for(int i=0;i<n-1;i++){
        ll l,r;
        cin>>l>>r;
        edges.push_back({l,r});
        out[l]++;
        in[r]++;
    }
    vector<pair<ll,ll>>v;
    for(int i=1;i<=n;i++){
        if(in[i]!=0){
    v.push_back({out[i],i});
        }
    }
    sort(v.begin(),v.end());
    vector<ll>rank(n+1,0);
    int a=0;
    for(int i=v.size();i>=0;i++){
        rank[v[i].second]=a;
        a+=in[v[i].second];
    }
    for(int i=0;i<edges.size();i++){
        cout<<rank[edges[i][1]]++<<endl;
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