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
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    ll mini=1;
    ll maxi=1;
    ll prdct=1;
    ll mini_index=-1;
    ll tm_index=-1;
    ll maxi_index=0;
    ll c=0;
    ll zero=-1;
    for(ll i=0;i<n;i++){
        prdct*=a[i];
        if(prdct==0){
            prdct=1;
            tm_index=i;
            mini=1;
            c=1;
            zero=i;
            continue;
        }
        if(prdct<0&&(tm_index==-1||prdct>mini||mini>0)){
            mini=prdct;
            tm_index=i;
        }
        else if(prdct>maxi||(prdct/mini>maxi&&tm_index!=-1)){
            maxi=max(prdct,prdct/mini);
            maxi_index=i;
            if(prdct/mini>prdct){
               
            mini_index=tm_index;}
            else if(c){
                mini_index=zero;
            
            }
            else{
                mini_index=-1;
            }
        }
    }
    if(maxi==1){
        cout<<n<<" "<<0<<endl;
        return;
    }
    cout<<mini_index+1<<" "<<n-maxi_index-1<<endl;
    
    
    
    
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