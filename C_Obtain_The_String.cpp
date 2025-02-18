#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
void solve() {
    string s;
    cin>>s;
    string t;
    cin>>t;
    ll n=s.size();
    vector<vector<ll>>f(26);
    for(ll i=0;i<n;i++){
        f[s[i]-'a'].push_back(i);
    }
    ll ans=0;
    ll last=-1;
    for(int i=0;i<t.size();i++){
        if(f[t[i]-'a'].empty()){
            cout<<-1<<endl;
            return;
        }
        ll pos=upper_bound(f[t[i]-'a'].begin(),f[t[i]-'a'].end(),last)-f[t[i]-'a'].begin();
        if(pos==f[t[i]-'a'].size()){
            ans++;
            last=f[t[i]-'a'][0];
        }
        else{
            last=f[t[i]-'a'][pos];
        }
        
    }
    ans++;
    cout<<ans<<endl;
    
}

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