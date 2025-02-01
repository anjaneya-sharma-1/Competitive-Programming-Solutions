#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 100000
#define MOD 1000000007

void solve(){
    ll n,a,b;
    cin>>n>>a>>b;
    if(abs(a-b)%2==0){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    ll t;
    cin >> t;
    while (t--) solve();
}