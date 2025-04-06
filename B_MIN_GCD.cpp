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
    ll mini=LLONG_MAX;
    for(int i=0;i<n;i++){
        cin>>a[i];
        mini=min(mini,a[i]);
    }
    ll gc=0;
    ll count=0;
    for(int i=0;i<n;i++){
        if(a[i]==mini){
            count++;
        }
    }
    for(int i=0;i<n;i++){
        if(a[i]!=mini&&a[i]%mini==0){
            gc=__gcd(gc,a[i]);
        }
    }
    if(gc==mini||count>1){
        cout<<"Yes"<<endl;
        return;
    }
    cout<<"No"<<endl;
    return;
    
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