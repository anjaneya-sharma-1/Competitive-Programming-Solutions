#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 100000
#define MOD 1000000007

void solve(){
    ll n;
    cin>>n;
    vector<ll>A;
    vector<ll>B;
    for(ll i=0;i<n;i++){
        ll a;
        cin>>a;
        A.push_back(a);
    }
    for(ll i=0;i<n;i++){
        ll a;
        cin>>a;
        B.push_back(a);
    }
    vector<ll>L;
    ll cnt=0;
    ll k=0;
    for(ll i=0;i<n;i++){
        if(A[i]-B[i]<0){
            cnt++;
            k=B[i]-A[i];
        }else{
            L.push_back(A[i]-B[i]);
        }
    }
    sort(L.begin(),L.end());
    if(cnt>1){
        cout<<"NO"<<endl;
        return;
    }
    if(cnt==1){
        if(L.size()==0){
            cout<<"NO"<<endl;
            return;
        }else if(k>L[0]){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;


}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    ll t;
    cin >> t;
    while (t--) solve();
}