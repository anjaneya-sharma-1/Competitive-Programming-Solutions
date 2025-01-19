#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
    ll calc(vector<ll>a){
        ll res=0;
        for(int i=0;i<3;i++){
            res+=(a[i]+a[i+1]==a[i+2]);
        }
        return res;
    }
void solve() {
    vector<ll>a(5);
    cin>>a[0]>>a[1]>>a[3]>>a[4];
    ll ans=0;
    a[2]=a[0]+a[1];
    ans=max(ans,calc(a));
    a[2]=a[3]-a[1];
    ans=max(ans,calc(a));
    a[2]=a[4]-a[3];
    ans=max(ans,calc(a));
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