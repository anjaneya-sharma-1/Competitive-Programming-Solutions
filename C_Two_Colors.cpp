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
    vector<int> mp(n + 1, 0);
    vector<int> a(m);
    
    for(int i = 0; i < m; i++){
        cin>>a[i];
        mp[a[i]]++;
    }   
    vector<ll>count(n+2,0);
    for(int i=n;i>=1;i--){
        count[i]=count[i+1]+mp[i];
    }
    ll ans=0;
    for(ll i=1;i<n;i++){
        ll tot=0;
        ll left=count[i];
        ll right=count[n-i];
        ll common=count[max(i,n-i)];
        tot=left*right-common;
        ans+=tot;
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