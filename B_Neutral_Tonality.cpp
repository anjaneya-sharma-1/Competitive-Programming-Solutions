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
    vector<ll>b(m);
    vector<ll>a(n);
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    for(ll i=0;i<m;i++){
        cin>>b[i];
    }
    vector<ll>v;
    ll lis=0;
    for(ll i=0;i<n;i++){
        ll l=lower_bound(v.begin(),v.end(),a[i])-v.begin();
        if(l==v.size()){
            v.push_back(a[i]);
            lis++;
           
        }
        else{
            v[l]=a[i];
        }
    }
   v.clear();
    map<ll,ll>mp;
    
    for(ll i=0;i<n;i++){
        ll l=lower_bound(v.begin(),v.end(),a[i])-v.begin();
        if(l==v.size()){
            v.push_back(a[i]);
            
           
        }
        else{
            v[l]=a[i];
        }
        if(l==lis-1){
            b.push_back(a[i]);
            mp[i]=1;

        }
    }
    sort(b.begin(),b.end());
    reverse(b.begin(),b.end());
    ll l=0;
    for(ll i=0;i<n;i++){
        if(mp[i]){
            while(b[l]!=a[i]){
                cout<<b[l]<<" ";
                l++;
            }
            cout<<b[l]<<" ";
            l++;
        }
        else{
            cout<<a[i]<<" ";
        }
    }
    while(l<b.size()){
        cout<<b[l]<<" ";
        l++;
    }
    cout<<endl;
    



    
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