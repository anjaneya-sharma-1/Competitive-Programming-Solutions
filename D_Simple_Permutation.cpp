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
    if(n==2){
        cout<<2<<" "<<1<<endl;
        return;
    }
    if(n==3){
        cout<<2<<" "<<1<<" "<<3<<endl;
        return;
    }
    vector<ll> ans;
    ll count=n/3;
    ll rem=n%3;
    for(ll i=1;i<=count;i++){
        ans.push_back(3*i -1);
        ans.push_back(3*i-2);
        ans.push_back(3*i);
    }
    if(rem==1){
        ans.push_back(n);
    }
    else if(rem==2){
        ans.push_back(n-1);
        ans.push_back(n);
    }
    for(auto x:ans){
        cout<<x<<" ";
    }

    cout<<endl;
    
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
      

        }
    return 0;
}