#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
void solve() {
    ll n,k,x;
    cin>>n>>k>>x;
    if(k==1){
        if(x<=n){
            cout<<"YES"<<endl;
            return;
        }
        cout<<"NO"<<endl;
        return;
    }
    ll tot=k*(k-1)/2;
    ll left=x-tot;
    if(left<0||left<k){
        cout<<"NO"<<endl;
        return;
    }
    if(k-1>=n){
        cout<<"NO"<<endl;
        return;
    }
    if(left>n){
        ll sum=n*(n+1)/2-(n-k)*(n-k+1)/2;
        if(sum<x){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
}

};
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    ll t;
    cin >> t;
    
    
    while (t--){ 
        Solution* s = new Solution(); 
        s->solve();
        delete s; 

        }
    return 0;
}