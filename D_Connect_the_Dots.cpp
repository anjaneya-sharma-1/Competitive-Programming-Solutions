#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
    class DSU
{
    private: vector<int> p, rank;
    public:
 
        DSU(ll n)
        {
            rank.assign(n,0); p.assign(n,0);
            iota(p.begin(),p.end(),0);
        }
 
        int findSet(int i){ return (p[i] == i) ? i : p[i] = findSet(p[i]);}
 
        bool isSameSet(int i, int j){ return findSet(i) == findSet(j);}
 
        void unionSet(int i, int j)
        {
            if(!isSameSet(i,j))
            {
                int x = findSet(i), y = findSet(j);
                if(rank[x] > rank[y]) p[y] = x;
                else 
                {
                    p[x] = y;
                    if(rank[x] == rank[y]) rank[y]++;
                }
            }
        }
};

void solve() {
    ll n,m;
    cin>>n>>m;
    vector<vector<ll>> arr(n+1,vector<ll>(11,0));
    while(m--){
        ll a,d,k;
        cin>>a>>d>>k;
        arr[a][d] =max(k,arr[a][d]);
    }
    DSU d(n+1);

    for(int i =1;i<=n;i++){
        for(int j=1;j<11;j++){
            ll k=arr[i][j];
            ll pos=i;
            while(k>0&&pos<=n){
                k--;
                d.unionSet(pos,pos+j);
                arr[pos][j]=0;
                pos+=j;
                k=max(arr[pos][j],k);
            }

        }
    }
    //cout<<ans<<endl;
    ll ans=0;
    for(int i =1;i<=n;i++){
        ans+=(d.findSet(i)==i);
    }
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