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
    vector<ll> v(n);
    ll sum=0;
    for(int i=0;i<n;i++){
        
        cin>>v[i];
        sum+=v[i];};
    sort(v.begin(),v.end());
    vector<ll>ps(n,0);
    ps[0]=v[0];
    for(int i=1;i<n;i++){
        ps[i]=ps[i-1]+v[i];
    }
    ll ans=0;
    ll l=0;
    int c=0;
    ll curr=0;

    ll b=0;
    for(int i=n-1;i>=0;i--){
        ll t=l;
        if(i<=l){
            ans+=v[i];
            continue;
        }
        while(t<i&&ps[t]-curr<v[i]){
            t++;
        }
        if(t==i){
            if(v[i]/2+ 1+v[i]%2<v[i]){
                ans+=v[i]/2+ 1+v[i]%2;

            }
            else{
                ans+=v[i];
                b+=v[i];
            }
            ;
        }
        else{
            ans++;
            curr+=v[i];
            l=t;
        }
        
    }
    cout<<ans-b/2<<endl;


    
    
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