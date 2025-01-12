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
    vector<ll>a(n);
    ll count=0;
    for(ll i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==0){
            count++;
        }
    }
    if(count==n){
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;
    sort(a.begin(),a.end());
    vector<ll>ans;
    ll l=0;
    ll r=n-1;
    ll total=0;
    ll cap=a[n-1]-a[0];
    while(l<=r){
        while(r>=0&&total+a[r]<cap){
            total+=a[r];
            ans.push_back(a[r]);
            r--;
        }
        while(l<=r&&total+a[r]>=cap){
            total+=a[l];
            ans.push_back(a[l]);
            l++;
        }
    }
  
        for(ll i=0;i<n;i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    

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