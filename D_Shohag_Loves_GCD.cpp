#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
 
void solve() {
    ll n,m;
    cin>>n>>m;
    vector<ll>L;
    for(ll i=0;i<m;i++){
        ll a;
        cin>>a;
        L.push_back(a);
    }
    sort(L.begin(),L.end(),greater<ll>());
    map<ll,ll>mp;
    for(ll i=0;i<m;i++){
        mp[L[i]]=i;
    }
    vector<ll>A(n+1,INT_MAX);
    A[1]=L[0];
    for(ll i=1;i<=n;i++){
        ll index=mp[A[i]];
        for(ll j=i*2;j<=n;j+=i){
            if(index+1>=m){
                cout<<-1<<endl;
                return;
            }
            A[j]=L[index+1];
        }
    }
    for(ll i=1;i<=n;i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;
 
    
 
    
    
    
    
}
int main(){
    ll t;
    cin >> t;
    while (t--) solve();
}