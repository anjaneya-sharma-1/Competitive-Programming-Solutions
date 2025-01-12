#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve() {
    ll n,k;
    cin >> n>>k;
    if(n%2==0){
        if(k%n==0){
            cout<<n<<endl;
        }else{
            cout<<k%n<<endl;
        }
    }else{
        ll rema=(n-1)/2;
        ll add;
        if(k%rema==0){
            add=(k/rema>0)?k/rema-1:0;
        }else{
            add=k/rema;
        }
        if((k+add)%n==0){
            cout<<n<<endl;
        }else{
            cout<<(k+add)%n<<endl;
        }
    }

    
}
int main() {
    int t;
    cin >> t;
    while (t--) solve();
}