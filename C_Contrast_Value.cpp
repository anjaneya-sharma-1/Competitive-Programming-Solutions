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
    ll count =0 ;
    for(int i =0;i<n;i++){
        ll curr;
        cin>>curr;
        v[i]=curr;
    }
    n = std::unique(v.begin(), v.end()) - v.begin();
    for(int i =0;i<n;i++){
        if((i==0)||(i==n-1&&v[i]!=v[i-1])||(v[i]>v[i-1]&&v[i]>v[i+1])||(v[i]<v[i-1]&&v[i]<v[i+1])){
            count++;
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