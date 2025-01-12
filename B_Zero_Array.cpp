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
    vector<ll> a(n);
    vector<ll> b(n,0);
    ll sum=0;
    ll maxi=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
        maxi=max(maxi,a[i]);
    }
    if(sum%2){
        cout<<"NO"<<endl;
        return;
    }
    if(maxi>sum-maxi){
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;
    
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