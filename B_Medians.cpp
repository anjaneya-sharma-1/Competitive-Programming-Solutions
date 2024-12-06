#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 998244353
 
void solve() {
    ll n,k;
    cin>>n>>k;
    if((n+1)/2==k){
        cout<<1<<endl;
        cout<<1<<endl;
        return;
    }
    if(k==n || k==1){
        cout<<-1<<endl;
        return;
    }
    if(k>(n+1)/2){
        cout<<2*(n-k)+1<<endl;
        cout<<1<<" ";
        for(int i =n- 2*(n-k)+1;i<=n;i++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    else{
        cout<<(2*k)-1<<endl;
        for(int i =1;i<=(2*k)-1;i++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    
    
 
    
    
}
int main(){
    ll t;
    cin >> t;
    while (t--) solve();
}