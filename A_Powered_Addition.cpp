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
    ll maxi=LLONG_MIN;
    ll prev=LLONG_MIN;
    for(int i=0;i<n;i++){
        ll curr;
        cin>>curr;
        if(curr>=prev){
            prev=curr;
        }
        else{
            maxi=max(prev-curr,maxi);
        }
    }
    if(maxi==LLONG_MIN){
        cout<<0<<endl;
        return;
    }
    cout<<32-__builtin_clz(maxi)<<endl;
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