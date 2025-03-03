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
    vector<ll> a(n);
    ll c=0;
    ll maxi=0;
   
    for(ll i=0;i<n;i++){
        cin>>a[i];
        if(a[i]<maxi&&(a[i]<x||maxi<x)){
            c=1;
        }
      
        maxi=max(maxi,a[i]);
        
    }
    if(c){
        cout<<-1<<endl;
        return;
    }
    vector<ll>b=a;
    sort(b.begin(),b.end());
    if(a==b){
        cout<<0<<endl;
        return;
    }
    ll curr=0;
    ll ans=0;
    for(ll i=0;i<n-1;i++){
        if(a[i]>a[i+1]||a[i]>x){
            if(a[i]<x||a[i+1]<x){
                cout<<-1<<endl;
                return;
            }
            if(a[i]>a[i+1]){
                ans=curr+1;
            }
            curr++;
            x=a[i];
        }
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