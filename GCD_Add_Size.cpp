#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 800000
#define MOD 1000000007
class Solution{
    public:
void solve() {
    ll n;
    cin>>n;
    vector<ll>a(n);
    
    map<ll,ll>mp;
    ll check=0;
    ll maxi=0;
    for(ll i=0;i<n;i++){
        cin>>a[i];
        maxi=max(maxi,a[i]);
        mp[a[i]]++;
        if(a[i]>=N){
            check=1;
        }
    }
   
        ll ans=0;
        for(auto x:mp){
            ans=max(ans,x.second+x.first);
        }
       
    if(check==1){
        cout<<ans<<endl;
        return;
    }
    vector<ll>divisors(maxi+1,0);
   
    for (int i = 0; i < n; i++) { 
  
        
        for (int j = 1; j <= sqrt(a[i]); j++) { 
  
          
            if (a[i] % j == 0) { 
  
             
                divisors[j]++; 
  
                if (j != a[i] / j) {
                if(a[i]/j +n<=ans){
                    
                    break;
                }
                    divisors[a[i] / j]++; }
            } 
        } 
        
    } 
    for (int i = maxi; i >= 1; i--) 
    {
        ans=max(ans,divisors[i]+i);
} 
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