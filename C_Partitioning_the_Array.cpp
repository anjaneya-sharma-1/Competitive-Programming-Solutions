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
    vector<ll> a(n);
    ll c=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
       
    }
    vector<ll> facts;
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            facts.push_back(i);
            if(i!=n/i){
                facts.push_back(n/i);
            }
        }
    }
    ll ans=0;
    
 
        for(int i=0;i<facts.size();i++){
            ll fact=facts[i];
            ll g=0;
            for(int j=fact;j<n;j++){
                g=__gcd(abs(a[j]-a[j-fact]),g);
            }
            ans+=(g!=1);
          
           
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