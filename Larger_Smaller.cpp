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
    vector<ll>a(n);
    ll mini=INT_MAX;
    ll maxi=INT_MIN;
    for(int i=0;i<n;i++){
        cin>>a[i];
        mini=min(mini,a[i]);
        maxi=max(maxi,a[i]);
    }
    if(maxi==mini){
        cout<<0<<endl;
        return;
    }
    cout<<maxi-mini-1<<endl;
    
    
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
      

        }
    return 0;
}