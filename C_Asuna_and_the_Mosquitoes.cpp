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
    vector<ll>a;
    ll tot=0;
    ll count=0;
    ll maxi=0;
    for(int i=0;i<n;i++){
        ll x;
        cin>>x;
        a.push_back(x);
        tot+=x;
        count+=x%2;
        maxi=max(maxi,x);
    }
    if(count==0||count==n){
        cout<<maxi<<endl;
        return;
    }
    else{
        cout<<tot-count+1<<endl;
        return;
    }
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