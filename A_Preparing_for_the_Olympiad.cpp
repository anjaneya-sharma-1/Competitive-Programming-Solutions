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
    vector<ll> v;
    for(int i=0;i<n;i++){
        ll curr;
        cin>>curr;
        v.push_back(curr);
    }
    vector<ll>u;
    for(int i=0;i<n;i++){
        ll curr;
        cin>>curr;
        if(i>0){
            u.push_back(curr-v[i-1]);
        }
    }
    sort(u.begin(),u.end());
    ll ans=0;
    for(int i=0;i<n-1;i++){
        if(u[i]<0){
            ans+=u[i];
        }
        else{
            break;
        }
    }
    cout<<ans*-1 + v[n-1]<<endl;
    
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