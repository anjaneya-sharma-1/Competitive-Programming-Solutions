#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
    bool check(pair<ll,ll>p,ll x2,ll y2,ll a,ll b){
        if(abs(p.first-x2)==a&&abs(p.second-y2)==b){
            return true;
        }
        if(abs(p.first-x2)==b&&abs(p.second-y2)==a){
            return true;
        }
        return false;

    }
void solve() {
    ll a,b;
    cin>>a>>b;
    ll x1,y1,x2,y2;
    cin>>x1>>y1;
    cin>>x2>>y2;
    set<ll>s;
    pair<ll,ll> p1={x1-a,y1-b};
    pair<ll,ll> p2={x1-a,y1+b};
    pair<ll,ll> p3={x1+a,y1-b};
    pair<ll,ll> p4={x1+a,y1+b};
    pair<ll,ll> p5={x1-b,y1-a};
    pair<ll,ll> p6={x1-b,y1+a};
    pair<ll,ll> p7={x1+b,y1-a};
    pair<ll,ll> p8={x1+b,y1+a};
    set<pair<ll,ll>>p;
    p.insert(p1);
    p.insert(p2);
    p.insert(p3);
    p.insert(p4);
    p.insert(p5);
    p.insert(p6);
    p.insert(p7);
    p.insert(p8);
    ll ans=0;
    for(auto i:p){
        ans+=check(i,x2,y2,a,b);
    }
    cout<<ans<<endl;}
};
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    ll t;
    cin >> t;
    
    
    while (t--){ 
        Solution* s = new Solution(); 
        s->solve();
        delete s; 

        }
    return 0;
}