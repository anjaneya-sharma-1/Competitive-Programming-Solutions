#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
void solve() {
    ll n,m;
    cin>>n>>m;
    ll tot=0;
    vector<ll>val(n);
    vector<ll>a;
    vector<ll>b;
    for(int i=0;i<n;i++){
        cin>>val[i];
        tot+=val[i];
    }
    for(int j=0;j<n;j++){
        ll x;
        cin>>x;
        if(x==1){
            a.push_back(val[j]);
        }else{
            b.push_back(val[j]);
        }
    }
    sort(a.begin(),a.end(),greater<ll>());
    sort(b.begin(),b.end(),greater<ll>());
    ll sum=0;
    ll ans=INT_MAX;
    if(tot<m){
        cout<<-1<<"\n";
        return;
    }

    ll bsum=0;
    ll j=0;
    for(j=0;j<b.size();j++){
        bsum+=b[j];
        if(bsum>=m){
            ans=min(ans,2*(j+1));
            break;
        }
    }
    if(b.empty()||j==b.size()){
        j--;
    }
    for(int i=0;i<a.size();i++){
        bsum+=a[i];
        while(j>=0&&bsum-b[j]>=m){
            bsum-=b[j];
            j--;
        }
        if(bsum>=m){
            ans=min(ans,(i+1)+2*(j+1));
        }
    }
    cout<<ans<<"\n";
    return;
    
    
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