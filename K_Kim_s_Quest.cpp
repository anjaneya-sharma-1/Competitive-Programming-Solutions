#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 998244353
class Solution{
    public:

void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n+1);
    ll odd=0;
    ll even=0;
    for(int i = 1 ;i<=n; i++){
        cin >> a[i];
        a[i]%=2;}
    vector<ll>prev(8,0);
    ll count0=0;
    ll count1=0;
    for(int i=1;i<=n;i++){
        vector<ll>curr=prev;
        if(a[i]==0){
           curr[4]+=(prev[0]+prev[4])%MOD;
           curr[4]%=MOD;
           curr[6]+=(prev[3]+prev[7])%MOD;
           curr[6]%=MOD;
           curr[0]+=count0;
           curr[0]%=MOD;
           curr[2]+=count1;
           curr[2]%=MOD;
            count0++;
        }
        else{
            curr[5]+=(prev[2]+prev[6])%MOD;
            curr[5]%=MOD;
            curr[7]+=(prev[5]+prev[1])%MOD;
            curr[7]%=MOD;
            curr[1]+=count0;
            curr[1]%=MOD;
            curr[3]+=count1;
            curr[3]%=MOD;
            count1++;

        }
        prev=curr;
    }
    cout<<(prev[4]+prev[5]+prev[6]+prev[7])%MOD<<endl;

    
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