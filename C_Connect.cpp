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
    ll r1,c1,r2,c2;
    cin>>n;
    cin>>r1>>c1;
    cin>>r2>>c2;
    vector<vector<ll>>isWater(n+1,vector<ll>(n+1,0));
    DSU d(n*n+1);
    for(ll i=0;i<n;i++){
        for(ll j=1;j<=n;j++){
            d.make_set(i*n+j);
        }
    }
    for(ll i=1;i<=n;i++){
        string s;
        cin>>s;
        for(ll j=1;j<=n;j++){
            if(s[j-1]=='1'){
                isWater[i][j]=1;
            }
        }
    }
    for(ll i=1;i<=n;i++){
        for(ll j=1;j<=n;j++){
            if(isWater[i][j]==0){
                if(i>1&&isWater[i-1][j]==0){
                    d.union_set((i-1)*n+j,(i-2)*n+j);
                }
                if(j>1&&isWater[i][j-1]==0){
                    d.union_set((i-1)*n+j,(i-1)*n+j-1);
                }
                if(i<n&&isWater[i+1][j]==0){
                    d.union_set((i-1)*n+j,i*n+j);
                }
                if(j<n&&isWater[i][j+1]==0){
                    d.union_set((i-1)*n+j,(i-1)*n+j+1);
                }
            }
        }
    }
    ll dest=d.find_set((r2-1)*n+c2);
    ll src=d.find_set((r1-1)*n+c1);
    if(dest==src){
        cout<<0<<endl;
        return;
    }
    ll ans=INT_MAX;
    for(ll i=1;i<=n;i++){
        for(ll j=1;j<=n;j++){
            if(isWater[i][j]==0){
                ll curr=d.find_set((i-1)*n+j);
                if(curr==src){
                    for(ll k=1;k<=n;k++){
                        for(ll l=1;l<=n;l++){
                            if(isWater[k][l]==0){
                                ll curr2=d.find_set((k-1)*n+l);
                                if(curr2==dest){
                                    ans=min(ans,(i-k)*(i-k)+(j-l)*(j-l));
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    cout<<ans<<endl;   
    
    
   

    
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