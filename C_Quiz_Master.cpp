#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
void solve() {
    
    ll n,m;
    cin>>n>>m;
    vector<ll>arr(n);
    vector<vector<ll>>fact(n+1);
    for(ll i=0;i<n;i++){
        cin>>arr[i];
        
    }
    sort(arr.begin(),arr.end());
    for (ll i = 0; i < n; i++) {
        ll x = arr[i];
        for (ll j = 1; j * j <= x; j++) {
            if (x % j == 0) {
                if (j <= m) fact[i].push_back(j);
                if (x / j <= m && j != x / j) fact[i].push_back(x / j);
            }
        }
    }
    ll l=0;
    ll count=0;

    unordered_map<ll,ll>mp;
    ll ans=INT_MAX;
    for(ll i=0;i<n;i++){
        for(auto x:fact[i]){
            mp[x]++;
            if(mp[x]==1){
                
                count++;
            }

        }
        
        while(count==m){
            ans=min(ans,arr[i]-arr[l]);
            for(auto x:fact[l]){
                mp[x]--;
                if(mp[x]==0){
                
                    count--;
                }
            }
            l++;
        }

    }
    if(ans==INT_MAX){
        cout<<-1<<endl;
        return;
    }
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