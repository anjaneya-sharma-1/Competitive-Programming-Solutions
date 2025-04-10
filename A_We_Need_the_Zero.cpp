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
    ll xorr=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        xorr^=a[i];
    }
    if(n%2){
        cout<<xorr<<endl;
    }
    else{
        if(xorr==0){
            cout<<2<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
    
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