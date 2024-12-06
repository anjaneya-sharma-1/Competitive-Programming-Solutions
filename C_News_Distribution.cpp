#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
    class DSU{
public:
    vector<ll>parent;
    vector<ll> size;
    DSU(ll n){
        parent.resize(n+1);
        size.resize(n+1);
    }
    void make_set(ll v){
        parent[v]=v;
        size[v]=1;
    }
    ll find_set(ll a){
          if(parent[a]==a){
              return a;
          }
        return parent[a]=find_set(parent[a]);
      }
    int union_set(ll a,ll b){
        ll pa =find_set(a);
        ll pb=find_set(b);
        if(pa==pb){
            return 0;
        }
        else{
            if(size[pb]>size[pa]){
                swap(pa,pb);
            }
            parent[pb]=pa;
            size[pa]+=size[pb];
            return 1;
        }
}
      
};
void solve() {
    ll n,m;
    cin>>n>>m;
    map<ll,ll>mp;
    DSU d(n+1);
    for(int i =1;i<=n;i++){
        d.make_set(i);
    }
    for(int i=0;i<m;i++){
        ll k;
        cin>>k;
        ll prev;
        if(k!=0){
        
        cin>>prev;}
        for(int j=1;j<k;j++){
            ll curr;
            cin>>curr;
            d.union_set(curr,prev);
        }
    }
    for(ll i=1;i<=n;i++){
        mp[d.find_set(i)]++;
    }
    for(ll i=1;i<=n;i++){
        cout<<mp[d.find_set(i)]<<" ";
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