#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
void solve() {
    ll n,m;
    cin>>m>>n;
    vector<pair<ll,ll>>segs(m);
    for(ll i=0;i<n;i++){
        cin>>segs[i].first>>segs[i].second;
        segs[i].first--;
    }
    ll q;
    cin>>q;
    vector<ll>c(q);
    for(ll i=0;i<q;i++){
        cin>>c[i];
    }
    c.push_back(c.back());
    ll l=1;
    ll r=q+1;
    while(l<r){
        ll mid=(l+r)/2;
        vector<ll>cnt(m,0);
        for(ll i=0;i<mid;i++){
            cnt[c[i]-1]=1;
        }
        for(int i=1;i<m;i++){
            cnt[i]+=cnt[i-1];
        }
        bool ok=false;
        for(ll i=0;i<n;i++){
            if(cnt[segs[i].second-1]-(segs[i].first>0?cnt[segs[i].first-1]:0)>(segs[i].second-segs[i].first)/2){
                ok=true;
                break;
            }
        }
        if(ok){
            r=mid;
        }
        else{
            l=mid+1;
        }
        if(l==q+1){
            cout<<-1<<endl;
            return;
        }

    }
    cout<<r<<endl;

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