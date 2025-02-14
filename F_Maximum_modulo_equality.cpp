#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007

    vector<ll>t(4*N);
    void build(vector<ll>&a,ll v,ll tl,ll tr){
        if(tl==tr){
            t[v]=a[tl];
        }else{
            ll tm=(tl+tr)/2;
            build(a,v*2,tl,tm);
            build(a,v*2+1,tm+1,tr);
            t[v]=__gcd(t[v*2],t[v*2+1]);
        }
    }
    ll gc(ll v,ll tl,ll tr,ll l,ll r){
        //tl=0,tr=n-1,l and r are query boundaries
        if(l>r){
            return 0;
        }
        if(l==tl&&r==tr){
            return t[v];
        }
        ll tm=(tl+tr)/2;
        return __gcd(gc(v*2,tl,tm,l,min(r,tm)),gc(v*2+1,tm+1,tr,max(l,tm+1),r));
        
    }
    
    
    void solve(){
        ll n,q;
        cin>>n>>q;
        vector<ll>A;
        vector<ll>L;
        if(n==1){
         ll elem;
         cin>>elem;
         while(q--){
                ll a,b;
                cin>>a>>b;
                cout<<0<<" ";

         }  
         cout<<endl;
         return; 
        }
        for(ll i=0;i<n;i++){
            ll a;
            cin>>a;
            A.push_back(a);
        }
        for(ll i=1;i<n;i++){
            L.push_back(abs(A[i-1]-A[i]));
        }
        
        build(L,1,0,n-2);
        for(ll i=0;i<q;i++){
            ll a,b;
            cin>>a>>b;
            if(a==b){
                cout<<0<<endl;
                continue;
            }
            cout<<gc(1,0,n-2,a-1,b-2)<<" ";
            
        }
        
    }
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    ll t;
    cin >> t;
    
    
    while (t--){ 
        solve();

        }
    return 0;
}