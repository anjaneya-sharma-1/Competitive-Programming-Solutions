#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
    ll maxi = LLONG_MIN;
    map<ll,vector<ll>> m;
    map<ll,ll> me;
    void hlpr(ll len){
        if(m.find(len)==m.end()||m[len].empty()){
            maxi=max(len,maxi);
            return;
        }
        else{
        vector<ll> v = m[len];
        for(ll i =0;i<v.size();i++){
            if(v[i]!=0){
                ll o =len+v[i];
                if(me.find(o)==me.end()){
                    me[o]=1;
                    hlpr(o);}}
        }
        maxi =max(maxi,len);
        return ;}
    }
void solve() {
    ll n;
    cin>>n;
    ll k ;
    ll curr;
    for(ll i =1;i<=n;i++){
        cin>>curr;
        k= curr+i-1;

        if(k>=n){
            m[k].push_back(i-1);
        }

    }
    
    hlpr(n);
    cout<<maxi<<endl;

    
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