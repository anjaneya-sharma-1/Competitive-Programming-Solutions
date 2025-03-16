#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
    void build(vector<ll>&t,vector<ll>& a,ll v,ll tl,ll tr){
        if(tl==tr){
            t[v]=a[tl];
        }
        else{
            ll tm=(tl+tr)/2;
            build(t,a,2*v,tl,tm);
            build(t,a,2*v+1,tm+1,tr);
            t[v]=min(t[v*2],t[v*2+1]);
        }
    }
    ll getMini(vector<ll>&t,ll v,ll tl,ll tr,ll l,ll r){
        if(l>r){
            return LLONG_MAX;
        }
        if(l==tl&&r==tr){
            return t[v];
        }
        ll tm=(tl+tr)/2;
        return min(getMini(t,v*2,tl,tm,l,min(r,tm)),getMini(t,v*2+1,tm+1,tr,max(l,tm+1),r));
    }

void solve() {
    ll n;
    cin>>n;
    vector<ll>a(n+2);
    for(ll i=1;i<=n;i++) cin>>a[i];
    vector<ll>preGreater(n+1,0);
    vector<ll>suffGreater(n+1,0);
    stack<ll>st;
    for(ll i=1;i<=n;i++){
        while(!st.empty() && a[st.top()]<=a[i]){
            st.pop();
        }
        if(st.empty()) preGreater[i]=0;
        else preGreater[i]=st.top();
        st.push(i);
    }
    stack<ll>st1;
    for(ll i=n;i>=1;i--){
        while(!st1.empty() && a[st1.top()]<=a[i]){
            st1.pop();
        }
        if(st1.empty()) suffGreater[i]=n+1;
        else suffGreater[i]=st1.top();
        st1.push(i);
    }
    vector<ll>t1(4*(n+1));
    vector<ll>t2(4*(n+1));
    vector<ll>preSum(n+2,0);
    vector<ll>suffSum(n+2,0);
    for(ll i=1;i<=n;i++){
        preSum[i]=preSum[i-1]+a[i];
    }
    for(ll i=n;i>=1;i--){
        suffSum[i]=suffSum[i+1]+a[i];
    }

    build(t1,preSum,1,1,n);
    build(t2,suffSum,1,1,n);
    for(ll i=1;i<=n;i++){
        ll l=preGreater[i];
        ll r=suffGreater[i];
        
        ll maxi=a[i];
        if(l==0){
            maxi=max(maxi,preSum[i]);
            l++;
        }
        if(r==n+1){
            maxi=max(maxi,suffSum[i]);
            r--;
        }
        if(l<=i-1){
        maxi=max(maxi,preSum[i]-getMini(t1,1,1,n,l,i-1));
        }
        if(r>=i+1){
        maxi=max(maxi,suffSum[i]-getMini(t2,1,1,n,i+1,r));
        }
        if(maxi>a[i]){
            //cout<<maxi<<" "<<a[i]<<endl;
            //cout<<l<<" "<<r<<endl;
            cout<<"NO"<<endl;
            return;
        }
        
    }
    cout<<"YES"<<endl;
    
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