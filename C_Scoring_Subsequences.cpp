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
    for(int i =0;i<n;i++){
        ll curr;
        cin>>curr;
        v.push_back(curr);
    }
    ll maxi=1;
    ll l=0;
    ll curr=1;
    vector<ll>dp(n,0);
 
    for(int i=0;i<n;i++){
        while(l<i&&v[l]<i+1-l){
            l++;
        }
        cout<<i-l+1<<" ";
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