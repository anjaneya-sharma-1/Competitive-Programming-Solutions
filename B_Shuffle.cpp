#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
void solve() {
    ll n,k,m;
    cin>>n>>k>>m;
    ll maxi=k;
    ll mini=k;
    for(int i=0;i<m;i++){
        ll l,r;
        cin>>l>>r;
        if(r<mini||l>maxi){
            continue;
        }
        mini=min(mini,l);
        maxi=max(maxi,r);
    }
    cout<<maxi-mini+1<<endl;
   
    
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