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
    vector<ll> v(n);
    for(auto &a: v){
        cin>>a;
    }
    ll k =1;
    set<ll> s;
    while(s.size()!=2){
        s.clear();
        k*=2;
        for(auto a : v){
            s.insert(a%k);
        }
    }
    cout<<k<<endl;

    
}

};
int main(){
    ll t;
    cin >> t;
    Solution s;
    while (t--) s.solve();
    return 0;
}