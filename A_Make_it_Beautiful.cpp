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
    for(int i=0;i<n;i++){
        cin>>a[i];

    }
    sort(a.begin(),a.end());
    reverse(a.begin(),a.end());
    if(a[0]==a[n-1]){
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;
    swap(a[1],a[n-1]);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";

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
      

        }
    return 0;
}