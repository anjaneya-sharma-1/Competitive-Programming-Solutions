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
    if(k==1){
        ll ans=max(*max_element(a.begin()+1,a.end())+a[0],a[n-1]+*max_element(a.begin(),a.end()-1));
        cout<<ans<<endl;
        return;
    }
    sort(a.begin(),a.end());
    reverse(a.begin(),a.end());
    ll ans=0;
    for(int i=0;i<=k;i++){
        ans+=a[i];
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
        delete s; 

        }
    return 0;
}