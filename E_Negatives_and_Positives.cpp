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
    vector<ll>v;
    ll count=0;
    ll mini=INT_MAX;
    ll sum=0;
    for(int i=0;i<n;i++){
        ll x;
        cin>>x;
        v.push_back(x);
        if(x<0){
            count++;
        }
        mini=min(mini,abs(x));
        sum+=abs(x);
    }
    if(count%2==0){
        cout<<sum<<endl;
    }
    else{
        cout<<sum-2*mini<<endl;}

    
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