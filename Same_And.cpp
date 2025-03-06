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
    if(m<=n){
        cout<<endl;
        return;
    }
    vector<ll>mask(64,0);
    vector<ll>ans;
    for(ll i=0;i<64;i++){
        if((n&(1LL<<i))){
            mask[i]=1;
        }
    }
    vector<ll>pos;
    ll first=0;
    for(ll i=0;i<64;i++){
        if(!mask[i]){
            pos.push_back(i);
        }
    }
    ans.push_back(n);
    for(ll i=0;i<pos.size();i++){
       ll num=1LL<<pos[i];
       num+=n;
       if(num<=m){
           ans.push_back(num);
       }
       else{
        break;
       }
    }
    if(ans.size()==1){
        cout<<-1<<endl;
        return;
    }
    cout<<ans.size()<<endl;
    for(auto x:ans){
        cout<<x<<" ";
    }
    cout<<endl;
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