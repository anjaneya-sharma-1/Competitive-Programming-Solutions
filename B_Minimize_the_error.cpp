#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 998244353
 
void solve() {
    ll n,k1,k2;
    cin>>n>>k1>>k2;
    priority_queue<ll>q;
    vector<ll>L;
    for(ll i=0;i<n;i++){
        ll a;
        cin>>a;
        L.push_back(a);
    }
    for(ll i=0;i<n;i++){
        ll a;
        cin>>a;
        q.push(abs(a-L[i]));
    }
    for(ll i=0;i<(k1+k2);i++){
        ll ele=q.top();
        q.pop();
        q.push(abs(ele-1));
    }
    ll answer=0;
    while(!q.empty()){
        ll ele=q.top();
        q.pop();
        answer+=ele*ele;
    }
    cout<<answer<<endl;
    
    
    
}
int main(){
    ll t=1;
    //cin >> t;
    while (t--) solve();
}