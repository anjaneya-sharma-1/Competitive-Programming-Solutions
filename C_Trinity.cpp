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
    for(int i =0;i<n;i++){
        cin>>v[i];
    }
    ll ans = n;
    sort(v.begin(),v.end());
    for(int i=0, c =0;i<n;i++){
        while(c+i<n&&v[i]+v[i+1]>v[i+c]){
            c++;
        }
        ans=min(ans,n-c);
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