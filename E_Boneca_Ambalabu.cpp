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
    vector<ll>a(n);
    vector<ll>mask(31,0);
    ll sum=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        for(int j=0;j<=30;j++){
            if((1<<j)&a[i]){
                mask[j]++;
            }
        }
        sum+=a[i];
    }
    ll ans=0;
    for(int i=0;i<n;i++){
        ll temp=sum+(n)*a[i];
        for(int j=0;j<=30;j++){
            if((1<<j)&a[i]){
                temp-=2*(1<<j)*mask[j];}
        }
        ans=max(ans,temp);
        
    }
    
    cout<<ans<<endl;
    
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