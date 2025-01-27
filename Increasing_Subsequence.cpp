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
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    vector<ll> v;
    v.push_back(a[0]);
    for(int i=1;i<n;i++){
        if(a[i]>v.back()){
            v.push_back(a[i]);
        }
        int ind= lower_bound(v.begin(),v.end(),a[i])-v.begin();
        v[ind]=a[i];
    }
    cout<<v.size()<<endl;
    
}

};
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    ll t=1;
    
    
    while (t--){ 
        Solution* s = new Solution(); 
        s->solve();
        delete s; 

        }
    return 0;
}