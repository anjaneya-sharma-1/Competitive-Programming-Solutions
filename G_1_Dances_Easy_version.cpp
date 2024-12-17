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
    vector<int> a;
    a.push_back(1);
    for(int i=0;i<n-1;i++){
        int curr;
        cin>>curr;
        a.push_back(curr);
    }
    vector<ll>b;
    for(int i=0;i<n;i++){
        ll x;
        cin>>x;
        b.push_back(x);
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    ll ans=0;
    ll l =n-1;
    for(int r=n-1;r>=0&&l>=0;r--){
        while(l>=0&&a[l]>=b[r]){
            l--;
            ans++;
        }
        l--;
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