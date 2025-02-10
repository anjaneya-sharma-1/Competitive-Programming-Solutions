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
    vector<ll>sieve(n+1,0);
    vector<ll>ans;
    for(int i=2;i<=n;i++){
        if(sieve[i]==0){
            for(int j=i;j<=n;j+=i){
                if(sieve[j]==0){
                    sieve[j]=i;
                }
            }
            ll curr=i;
            while(curr<=n){
                ans.push_back(curr);
                curr*=i;
            }
        }
    }
    cout<<ans.size()<<endl;
    for(auto x:ans){
        cout<<x<<" ";
    }
    
    
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