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
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    ll ans=0;
    ll count=0;
    for(int i=0;i<n;i++){
        if(a[i]==0){
            if(count){
                ans++;
                count=0;
            }
        }
        else{
            count++;
        }
    }
    if(count){
        ans++;
    }
    ans=min(ans,2LL);
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