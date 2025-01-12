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
    vector<ll>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int t=0;
    ll ans=0;
    ll tempx=x;
    unordered_map<ll,ll>mp;
    vector<ll>ps(n,0);
    ps[0]=v[0];
    for(int i=1;i<n;i++){
        ps[i]=ps[i-1]+v[i];
    }

    for(int i=n-1;i>=0;i--){
        if(ps[i]<=x){
            ans+=(x-ps[i])/(i+1)+1;
        }
    }
    cout<<ans<<endl;
    
}

};
int main(){
    ll t;
    cin >> t;
    
    while (t--){ 
        Solution* s = new Solution(); 
        s->solve();
        delete s; 

        }
    return 0;
}