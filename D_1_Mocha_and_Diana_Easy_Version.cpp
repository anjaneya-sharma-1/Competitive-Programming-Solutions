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
    ll n , a , b;
    cin >> n >> a >> b;
    DSU d1(n+1);
    DSU d2(n+1);
    for(ll i = 1 ; i <= n ; i++){
        d1.make_set(i);
        d2.make_set(i);
    }
    for(ll i = 0 ; i < a ; i++){
        ll x , y;
        cin >> x >> y;
        d1.union_set(x,y);
    }
    for(ll i = 0 ; i < b ; i++){
        ll x , y;
        cin >> x >> y;
        d2.union_set(x,y);
    }
    ll ans = 0;
    vector<pair<ll,ll>>v;
    for(ll i = 1 ; i <= n ; i++){
        for(ll j = i+1 ; j <= n ; j++){
            if(d1.find_set(i)!=d1.find_set(j)&&d2.find_set(i)!=d2.find_set(j)){
                ans++;
                d1.union_set(i,j);
                d2.union_set(i,j);
                v.push_back({i,j});
            }
        }
    }
    cout << ans << "\n";
    for(auto x : v){
        cout << x.first << " " << x.second << "\n";
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