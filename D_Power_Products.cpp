#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
void solve() {
    ll n,k;
    cin>>n>>k;
    vector<ll>arr(n);
    map<map<ll,ll>,ll>mp;
    ll ans=0;
    for(ll i=0;i<n;i++){
        cin>>arr[i];
        map<ll,ll>m1;
        map<ll,ll>m2;
        for(ll j=2;j*j<=arr[i];j++){
            ll count=0;
            while(arr[i]%j==0){
                count++;
                arr[i]/=j;
            }
            count%=k;
            if(count==0) continue;
            m1[j]=count;
            m2[j]=k-count;
        }
        if(arr[i]>1){
            m1[arr[i]]=1;
            m2[arr[i]]=k-1;
        }
        ans+=mp[m2];
        mp[m1]++;
    }
    cout<<ans;
    
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