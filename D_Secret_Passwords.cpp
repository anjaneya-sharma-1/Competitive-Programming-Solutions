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
    ll n;
    cin>>n;
    set<ll>s;
    vector<ll>v;
    DSU d(26);
    for(int i=0;i<26;i++){
        d.make_set(i);
    }
    for(int i=0;i<n;i++){
        string str;
        cin>>str;
        for(int j=0;j<str.size();j++){
            s.insert(str[j]-'a');
        }
        for(int j=0;j<str.size()-1;j++){
            d.union_set(str[j]-'a',str[j+1]-'a');
        }
    }
    ll ans=0;
    for(auto x:s){
        if(d.find_set(x)==x){
            ans++;
        }
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