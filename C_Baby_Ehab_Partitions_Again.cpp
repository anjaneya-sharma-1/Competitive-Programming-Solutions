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
    ll maxi=0;
    vector<ll>a(n+1);
    ll sum=0;
    bool odd=false;
    for(ll i=1;i<=n;i++){
        cin>>a[i];
        sum+=a[i];
        if(a[i]%2){
            odd=true;
        }
        maxi=max(maxi,a[i]);
    }

    vector<ll>prev(sum+1,0);
    prev[0]=1;    

    for(ll i=1;i<=n;i++){
        vector<ll>dp=prev;
        for(ll j=0;j<=sum;j++){
            
            if(j-a[i]>=0){
                dp[j]|=(prev[j-a[i]]);
            }
        }
        prev=dp;
    }
    vector<ll>dp=prev;
    if(sum%2||(!dp[sum/2])){
        cout<<0<<endl;
        return;
    }
    if(odd){
        for(int i=1;i<=n;i++){
            if(a[i]%2){
                cout<<1<<endl;
                cout<<i<<endl;
                return;
            }
        }
    }
    else{
        
        for(ll j=2;j<=maxi;j*=2){
        
        for(int i=1;i<=n;i++){
            if(a[i]%j!=0){
                cout<<1<<endl;
                cout<<i<<endl;
                return;
            }
           
        }
        
    }

        

        
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