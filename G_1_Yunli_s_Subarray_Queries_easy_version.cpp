#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
void solve() {
    ll n,k,q;
    cin>>n>>k>>q;
    vector<ll>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
        a[i]-=i;
    }
    multiset<ll>freq;
    map<ll,ll>mp;
    vector<ll>ans(n+1,0);
    for(int i=0;i<k;i++){
        if(freq.find(mp[a[i]])!=freq.end())freq.erase(freq.find(mp[a[i]]));
        mp[a[i]]++;
        freq.insert((mp[a[i]]));
    }
    ans[k]=k-*freq.rbegin();
    for(int i=k;i<n;i++){
        if(freq.find(mp[a[i]])!=freq.end())freq.erase(freq.find(mp[a[i]]));
        mp[a[i]]++;
        freq.insert(mp[a[i]]);
        if(freq.find(mp[a[i-k]])!=freq.end())freq.erase(freq.find(mp[a[i-k]]));
        mp[a[i-k]]--;
        freq.insert(mp[a[i-k]]);
        ans[i+1]=k-*freq.rbegin();
    }
    while(q--){
        ll l,r;
        cin>>l>>r;
        cout<<ans[r]<<endl;
    }
    
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