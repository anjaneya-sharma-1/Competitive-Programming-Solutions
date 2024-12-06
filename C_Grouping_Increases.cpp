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
    vector<ll> v;
    for(int i=0;i<n;i++){
        ll curr;
        cin>>curr;
        v.push_back(curr);
    }
    map<ll,ll> m;
    ll count=0;
    ll prev1 = INT_MAX;
    ll prev2=INT_MAX;
    for(int i =0;i<n;i++){
        if(prev1>prev2){
            swap(prev1,prev2);
        }
        if(v[i]<=prev1){
            prev1=v[i];
        }
        else if(v[i]<=prev2){
            prev2=v[i];
        }
        else{
            count++;
            prev1=v[i];
        }
    }
    cout<<count<<endl;
    
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