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
    ll mini=a[0];
    ll ind=0;
    for(ll i=1;i<n;i++){
        if(a[i]>mini){
            for(ll j=i+1;j<n;j++){
                if(a[j]<a[i]){
                    cout<<"YES"<<endl;
                    cout<<ind+1<<" "<<i+1<<" "<<j+1<<endl;
                    return;
                }
            }
        }
        else{
            mini=a[i];
            ind=i;
        }
    }
    cout<<"NO"<<endl;
    
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
      

        }
    return 0;
}