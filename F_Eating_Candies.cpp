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
    vector<ll> v;
    vector<ll> l;
    ll sum=0;
    for(int i=1;i<=n;i++){
        ll curr;
        cin>>curr;
        v.push_back(curr);
        sum+=curr;
        l.push_back(sum);
    }
    sum=0;
    ll ans=0;
    for(int i=n;i>=1;i--){
        sum+=v[i-1];
        ll j=lower_bound(l.begin(),l.end(),sum)-l.begin();
        if(j+1<i&&l[j]==sum){
            ans=max(ans,n-i+1+j+1);
        }
    }
    cout<<ans<<endl;
    

    
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