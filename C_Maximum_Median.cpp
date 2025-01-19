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
    vector<ll>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    vector<ll>v;
    for(int i=n/2;i<n;i++){
        v.push_back(a[i]);
    }
    ll l=0;
    ll ans=v[0];
    while(k){
        if(l!=v.size()-1){
            if((l+1)*(v[l+1]-v[l])>k){
                ans+=k/(l+1);
                k=0;
            }
            else{
                ans+=v[l+1]-v[l];
                k-=(l+1)*(v[l+1]-v[l]);
                l++;
            }
        }
        else{
            ans+=k/(l+1);
            k=0;
        }
    }
    cout<<ans<<endl;
    
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