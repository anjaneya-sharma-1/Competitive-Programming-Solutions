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
    ll last=-1;
    ll mini=INT_MAX;
    vector<ll>a;

    for(int i=0;i<n;i++){
        ll x;
        cin>>x;
        if(i!=0){
            mini=min(mini,((x-last)/2));
        }
        last=x;
        a.push_back(x);
    }
    vector<ll>v=a;
    sort(v.begin(),v.end());
    if(a!=v){
        cout<<0<<endl;
        return;
    }
    cout<<mini+1<<endl;
    
    
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