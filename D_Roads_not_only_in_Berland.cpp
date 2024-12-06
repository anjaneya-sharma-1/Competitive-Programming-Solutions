#include <bits/stdc++.h>
using namespace std;
#define ll long long
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
        return find_set(parent[a]);
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

int main() {
  ll t=1;
  while (t--) {
    ll n;
    cin>>n;
    DSU d(n);
    vector<pair<ll,ll>>v;
    for(ll i =1;i<=n;i++){
      d.make_set(i);
    }    
    for(ll i =1;i<n;i++){
        ll a,b;
        cin>>a>>b;
        int c= d.union_set(a,b);
        if(!c){
            v.push_back({a,b});
        }
    }
    
    vector<pair<ll,ll>>b;
    
    ll chcc=d.find_set(1);
    ll count=-1;
      for(ll i=1;i<=n;i++){
          ll papa =d.find_set(i);
          if(papa==i){
              count++;
                if(i!=chcc){
                    b.push_back({1,i});
                }
              continue;
          }
      }
    cout<<count<<endl;
    int l=count;
    for(int i =0;i<v.size();i++){
        cout << v[i].first << " " << v[i].second << " " << b[i].first << " " << b[i].second << endl;
    }
  }
  return 0;
}