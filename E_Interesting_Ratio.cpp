#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 10000000
#define MOD 1000000007
class Solution{
    public:
    vector<ll>primes;
    vector<ll>ans;
    void sieve(){
        vector<bool>is_prime(N+1,true);
        is_prime[0]=is_prime[1]=false;
        for(ll i=2;i<=N;i++){
            if(is_prime[i]){
                primes.push_back(i);
                for(ll j=i*i;j<=N;j+=i){
                    is_prime[j]=false;
                }
            }
        }
    }
    Solution(){
        sieve();
        
    }

void solve() {
    ll n;
    cin>>n;
    ll ans=0;
    for(auto p : primes) {
        if(p > n)
            break;
        ans += n / p;
    }
    cout<<ans<<endl;
    
    
    
}

};
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    ll t;
    cin >> t;
    
    Solution* s = new Solution(); 
    while (t--){ 
        
        s->solve();
      

        }
    return 0;
}