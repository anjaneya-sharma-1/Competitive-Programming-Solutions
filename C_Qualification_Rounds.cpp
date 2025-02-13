#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
void solve() {
    ll n,k;
    cin>>n>>k;
    map<ll,ll>mp;
    map<ll,ll>mp2;
    ll maxi=1<<(k);
    maxi--;
    mp[0]++;
    ll ans=0;
    set<ll>st;
    for(ll i=0;i<n;i++){
        ll x=0;
        for(ll j=0;j<k;j++){
            ll c;
            cin>>c;
            x+=(c<<j);
            if(c==0){
                mp2[(1<<j)]++;
            }
        }
        mp[x^maxi]++;
        //cout<<x<<" "<<(x^maxi)<<endl;
        if(mp.find(x)!=mp.end()){

            ans=1;
        }
        if(__builtin_popcount(x)==1){
            
            st.insert(x);
        }
    }
    for(auto x:st){
        if(mp2[x]){
            ans=1;
        }
    }
    if(ans==1||st.size()>1){
        cout<<"YES"<<endl;
    }else{

        cout<<"NO"<<endl;
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