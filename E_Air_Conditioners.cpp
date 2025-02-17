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
    vector<ll>t(n);
    vector<ll>a(n);
    vector<ll>ans(n+1,INT_MAX);
    for(ll i=0;i<k;i++){
        cin>>a[i];

    }

    for(ll i=0;i<k;i++){
        cin>>t[i];
        ans[a[i]]=t[i];
    }
    ll mini=ans[1]-1;
    for(ll i=2;i<=n;i++){
        ans[i]=min(ans[i],mini+i);
        mini=min(mini,ans[i]-i);
    }
    ll mini2=ans[n]+n;
    for(ll i=n-1;i>=1;i--){
        ans[i]=min(ans[i],mini2-i);
        mini2=min(mini2,ans[i]+i);
    }
    for(ll i=1;i<=n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    
}

};
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    ll t;
    cin >> t;
    string line;
    
    while (t--){ 
        getline(cin, line);
        Solution* s = new Solution(); 
        s->solve();
        delete s; 

        }
    return 0;
}