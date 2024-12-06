#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 998244353
class Solution{
    public:
    ll factorial(ll n)
{
    ll res = 1;
    for (ll i = 2; i <= n; i++)
        res =(res* i)%MOD;
    return res;
}
void solve() {
    string s;
    cin>>s;
    ll n = s.size();
    ll k =0;
    ll j =0;
    ll res =1;
    for(int i =0;i<n;i++){
        if(i==0||s[i-1]!=s[i]){
            k++;
            
            if(i!=0){
                res=(res*(i-j))%MOD;
            }
            j=i;
        }
    }
    if(s[n-1]==s[n-2]){
        res=(res*(n-j))%MOD;
    }
    ll ans;
    ans =(factorial(n-k)*res)%MOD;
    cout<<n-k<<" "<<ans<<endl;
    
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