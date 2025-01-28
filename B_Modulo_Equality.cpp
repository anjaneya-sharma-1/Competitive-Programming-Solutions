#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
void solve() {
    ll n , m;
    cin>>n>>m;
    vector<ll>a(n);
    for(int i =0;i<n;i++){
        cin>>a[i];
    }
    vector<ll>b(n);
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    sort(b.begin(),b.end());
    sort(a.begin(),a.end());
    if(a==b){
        cout<<0<<endl;
        return;
    }
    ll x=INT_MAX;
    
    for(int i=0;i<n;i++){
        [&]() {
            ll val = (b[i] - a[0] + m) % m;
            for (int j = 1; j < n; ++j)
                if ((b[(j + i) % n] - a[j] + m) % m != val)
                    return;
            x = min(x, val);
        }();
    }
    cout<<x<<endl;
    
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