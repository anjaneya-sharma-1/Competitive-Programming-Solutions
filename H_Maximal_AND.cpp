#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
void solve() {
    ll n,k;
    cin>>n>>k;
    vector<ll>v(32);
    for(int i =0;i<n;i++){
        ll curr;
        cin>>curr;
        int j=0;
        while(curr>0){
            if((curr&1)==1){
                v[j]++;
            }
            curr>>=1;
            j++;
        }
    }
    ll ans =0 ;
    for(int j =30;j>=0;j-- ){
        if(n-v[j]<=k){
            k-=(n-v[j]);
            ans|=(1<<j);
        }
        //cout<<ans<<" ";
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