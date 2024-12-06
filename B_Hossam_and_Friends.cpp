#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
void solve() {
    ll n,m;
    cin>>n>>m;
    vector<pair<ll,ll>>p;
    for(int i =0;i<m;i++){
        ll x,y;
        cin>>x>>y;
        if(x>y){
            swap(x,y);
        }
        
        p.push_back({x,y});
    }
    sort(p.begin(),p.end());
    ll ans=0;
    ll prev;
    ll maxi=p[0].first;
    for(int i =0;i<p.size();i++){
        if(i==0||prev!=p[i].first){
            ans+=(1<<(p[i].second-maxi));
            maxi=p[i].first;
            prev=p[i].first;
        }
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