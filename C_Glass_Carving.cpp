#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
void solve() {
    ll n , m , q;
    cin>>n>>m>>q;
    set<ll>w;
    set<ll>h;
    map<ll,ll>wgap;
    map<ll,ll>hgap;
    w.insert(0);
    w.insert(n);
    h.insert(0);
    h.insert(m);
    wgap[n]=1;
    hgap[m]=1;
    while(q--){
        char c;
        ll x;
        cin>>c>>x;
        if(c=='H'){
            auto it = h.lower_bound(x);
            ll r = *(it);
            ll l = *(--it);
            hgap[r-l]--;
            if(hgap[r-l]==0){
                
                hgap.erase(r-l);
            }
            hgap[r-x]++;
            hgap[x-l]++;
            h.insert(x);

        }
        else{
            auto it = w.lower_bound(x);
            ll r = *(it);
            ll l = *(--it);
            wgap[r-l]--;
            if(wgap[r-l]==0){
                wgap.erase(r-l);
            }
            wgap[r-x]++;
            wgap[x-l]++;
            w.insert(x);
        }
        cout<<((wgap.rbegin()->first))*((hgap.rbegin()->first))<<endl;
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