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

    vector<ll> k;
    ll ans =0;
    for(int i=1;i<=n;i++){
        ll a;
        cin>>a;
        if(a<i){
            auto num = lower_bound(k.begin(),k.end(),a);
            if(!(num==k.begin()||(k.empty()))){
                ans+=(num-k.begin());
            }
        
            k.push_back(i);

        }
    }
    
    
  
    
    cout<<ans<<endl;
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