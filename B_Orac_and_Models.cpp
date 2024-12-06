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
    vector<ll> v(n+1);
    for(int i =1;i<=n;i++){
        ll a ;
        cin>>a;
        v[i]=a;
    }
    vector<ll> dp(n+1,1);
    ll maxi = 1;
    ll curr;
    for(int i =n/2;i>0;i--){
        curr = 1;
        for(int j = i+i;j<=n;j+=i){
            if(v[j]>v[i]){
                curr = max(curr , 1+dp[j]);
            }
        }
        dp[i]=curr;
        maxi = max(curr,maxi);
    }
    cout<<maxi<<endl;
    
}

};
int main(){
    ll t;
    cin >> t;
    while (t--){ 
        Solution* s = new Solution(); 
        s->solve();
        }
    return 0;
}