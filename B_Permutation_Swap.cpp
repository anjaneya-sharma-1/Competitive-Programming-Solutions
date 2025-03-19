#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n+1);
    map<ll,ll>mp;
    for(int i = 1 ;i<=n; i++){
        cin >> a[i];
        mp[a[i]]=i;
    }
    ll gc=0;
    for(int i=1;i<=n;i++){
        if(mp[i]!=i){
            gc=__gcd(gc,abs(mp[i]-i));
        }
    }
    cout<<gc<<endl;
    
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