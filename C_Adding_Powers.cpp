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
    vector<ll>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<ll>mask(64,0);
    if(k==1){
        cout<<"YES"<<endl;
        return;
    }
    for(ll i=0;i<n;i++){
        ll x=a[i];
        ll j=0;
        while(x>0){
            mask[j]+=(x%k);
            if(mask[j]>1){
                cout<<"NO"<<endl;
                return;
            }
            j++;
            x/=k;
        }
    }
    for(ll i=0;i<64;i++){
        if(mask[i]>1){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
    
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