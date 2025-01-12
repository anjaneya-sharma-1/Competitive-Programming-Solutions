#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
void solve() {
    ll n,m,k;
    cin>>n>>m>>k;
    vector<ll> factors;
    for(int i=1;i<=sqrt(k);i++){
        if(k%i==0){
            factors.push_back(i);
            if(i!=k/i){
                factors.push_back(k/i);
            }
        }
    }
    sort(factors.begin(),factors.end());
    vector<ll>vn;
  
    ll count=0;
    for(int i=0;i<n;i++){
        ll x;
        cin>>x;
        if(x==1){
            count++;
        }
        else{
            if(count){
                vn.push_back(count);
            }
            count=0;
        }
    }
    if(count){
                vn.push_back(count);
            }
    sort(vn.begin(),vn.end());
  
    count=0;
    ll ans=0;
    for(int i=0;i<m;i++){
        ll x;
        cin>>x;
        if(x==1){
            count++;
        }
        else{
           if(count){
                
                for(int j=0;j<factors.size();j++){
                    ll fact=k/factors[j];
                    if(factors[j]<=count){
                       
                    for(int l=0;l<vn.size();l++){
                        if(fact<=vn[l]){
                            
                        ans+=(vn[l]-fact+1)*(count-factors[j]+1);
                        }
                    }}
                    
                }
                
            }
            count=0;
        }
    }
    if(count){
                
                for(int j=0;j<factors.size();j++){
                    ll fact=k/factors[j];
                    if(factors[j]<=count){
                       
                    for(int l=0;l<vn.size();l++){
                        if(fact<=vn[l]){
                            
                        ans+=(vn[l]-fact+1)*(count-factors[j]+1);
                        }
                    }}
                    
                }
                
            }
    cout<<ans<<endl;
    
}

};
int main(){
    ll t=1;
    
    while (t--){ 
        Solution* s = new Solution(); 
        s->solve();
        delete s; 

        }
    return 0;
}