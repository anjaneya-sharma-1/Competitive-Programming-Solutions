#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
void solve() {
    ll n,q;
    cin>>n>>q;
    vector<ll> a(n);
    vector<ll> b(n+1,0);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<q;i++){
        ll l,r;
        cin>>l>>r;
        b[l-1]++;
        b[r]--;
    }
    for(int i=1;i<n;i++){
        b[i]+=b[i-1];
    }
    sort(a.begin(),a.end());
    reverse(a.begin(),a.end());
    sort(b.begin(),b.end(),greater<ll>());
    ll sum=0;
    for(int i=0;i<n;i++){
        if(b[i]==0){
            break;
        }
        sum+=a[i]*b[i];
    }
    cout<<sum<<endl;
}

};
int main(){
    ll t=1;
    
    while (t--){ 
        Solution* s = new Solution(); 
        s->solve();
        delete s; 

        }
    return 0;
}