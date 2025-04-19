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
    vector<ll>a(n);
    ll maxi=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        maxi=max(a[i],maxi);
    }
    ll s,t;
    cin>>s>>t;
    if(s==t){
        cout<<1<<endl;
        cout<<s<<endl;
        return;
    }
    vector<vector<ll>>sp(n+1);
    vector<vector<ll>>fa(maxi+1);
    vector<ll>vs(n+1,INT_MAX);
    vector<ll>pa(n+1,-1);
    vector<ll>vf(maxi+1,0);
    queue<ll>q;
    vector<int>spf(maxi+1);
    iota(spf.begin(),spf.end(),0);
    for(int i=2;i*i<=maxi;i++){
        if(spf[i]==i){
            for(int j=i*i;j<=maxi;j+=i){
                if(spf[j]==j){
                    spf[j]=i;
                }
            }
        }
    }
    for(int i=0;i<n;i++){
        ll x=a[i];
        while(x!=1){
            fa[spf[x]].push_back(i+1);
            sp[i+1].push_back(spf[x]);
            ll z=spf[x];
            while(x%z==0)x/=z;
        }
    }
    q.push(s);
    vs[s]=1;
    while(!q.empty()){
        ll x=q.front();
        q.pop();
        bool found=0;
        for(auto d:sp[x]){
            if(!vf[d]){
                vf[d]=1;
                for(auto spi:fa[d]){
                    if(vs[x]+1<vs[spi]){
                        vs[spi]=vs[x]+1;
                        pa[spi]=x;
                        if(spi==t){
                            
                            found=1;
                            break;
                        }
                        q.push(spi);
                    }
                }
            }
            if(found)break;
        }
        if (found) break;
    }
    if(pa[t]==-1){
        cout<<-1<<endl;
        return;
    }
    cout<<vs[t]<<endl;
    vector<int>path;
    ll curr=t;
    while(curr!=s){
        path.push_back(curr);
        curr=pa[curr];
    }
    path.push_back(s);
    reverse(path.begin(),path.end());
    for(int i=0;i<path.size();i++){
        cout<<path[i]<<" ";
    }
    cout<<endl;
    
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