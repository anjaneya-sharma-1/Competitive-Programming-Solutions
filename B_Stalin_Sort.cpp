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
    ll mini =LLONG_MAX;
    for(int i =0;i<n;i++){
        ll elem = v[i];
        ll currMini = i;
        for(int j=i+1;j<n;j++){
            if(v[j]>elem){
                currMini++;
            }
        }
        mini=min(mini,currMini);
    }
    cout<<mini<<endl;
    
}

};
int main(){
    ll t;
    cin >> t;
    Solution s;
    while (t--) s.solve();
    return 0;
}