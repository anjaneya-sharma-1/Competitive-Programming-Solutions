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
    ll maxi=0;
    ll mini=INT_MAX;
    vector<ll>a;
    for(int i=0;i<n;i++){
        ll x;
        cin>>x;
        mini=min(x,mini);
        maxi=max(x,maxi);
        a.push_back(x);
    }
    if(mini==maxi){
        cout<<-1<<endl;
        return;
    }
    vector<ll>v;
    sort(a.begin(),a.end());
    for(int i=0;i<n;i++){
        if(a[i]==maxi)break;
        v.push_back(a[i]);
    }
    cout<<v.size()<<" "<<n-v.size()<<endl;
    for(auto x:v){
        cout<<x<<" ";

    }
    cout<<endl;
    int i=n-v.size();
    while(i--){
        cout<<maxi<<" ";
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