#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
void solve() {
    map<ll,ll>mp;
    ll n,k;
    cin>>n>>k;
    vector<ll>a(n);
    ll count=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(mp[k-a[i]]>0){
            mp[k-a[i]]--;
            count++;
        }
        else{
        mp[a[i]]++;}
    }
    cout<<count<<endl;
    
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