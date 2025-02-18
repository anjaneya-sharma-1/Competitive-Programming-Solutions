#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
void solve() {
    ll n , m , k;
    cin >> n >> m >> k;
    vector<pair<ll,ll>>a(k);
    vector<pair<ll,ll>>b(k);
    for(ll i=0;i<k;i++){
        cin >> a[i].first >> a[i].second;
    }
    for(ll i=0;i<k;i++){
        cin >> b[i].first >> b[i].second;
    }
    string ans;
    for(ll i=0;i<n-1;i++){
        ans+='U';
    }
    for(ll i=0;i<m-1;i++){
        ans+='L';
    }
    for(ll i=0;i<n;i++){
        for(ll j=0;j<m-1;j++){
            if(i%2==0){
                ans+='R';
            }
            else{
                ans+='L';
            }
        }
        if(i!=n-1){
            ans+='D';
        }
    }
    cout << ans.size() << '\n';
    cout << ans;
    cout << '\n';
    return;

    
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