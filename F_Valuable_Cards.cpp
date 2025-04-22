#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
void solve() {
    ll n,x;
    cin>>n>>x;
    vector<ll>div;
    for(int i=x;i>=1;i--){
        if(x%i==0)div.push_back(i);
    }
    map<ll,ll>mp;
    vector<ll>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    ll m=div.size();
    ll ans=0;
    mp[1]=1;

    for(int i=0;i<n;i++){
        if(x%a[i]!=0)continue;
        for(int j=0;j<m;j++){
            if(!mp[div[j]])continue;
            if(x%(div[j]*a[i])==0){
                mp[div[j]*a[i]]=1;
            }

        }
        if(mp[x]==1){
            ans++;
            mp.clear();
            mp[1]=1;
            mp[a[i]]=1;
        }
    }
    cout<<ans+1<<endl;
    
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