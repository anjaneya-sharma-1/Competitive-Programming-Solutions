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
    unordered_map<ll,ll>mp;
    vector<ll>v;
    vector<ll>bit(31,0);
    for(int i=0;i<n;i++){
        ll x;
        cin>>x;
        mp[x]++;
        v.push_back(x);
        int j=0;
        while(x>0){
            bit[j]+=(x&1);
            x>>=1;
            j++;
        }
    }
    ll num=0;
    for(int i=0;i<31;i++){
        if(bit[i]==n){
            num+=(1<<i);
        }
    }
    if(mp[num]<2){
        cout<<0<<endl;
        return;
    }
    ll ans=0;
    ans=(ans+(mp[num]*(mp[num]-1))%MOD)%MOD;
    for(int i=n-2;i>=1;i--){
        ans=(ans*i)%MOD;
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