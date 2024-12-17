#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
void solve() {
    ll n,l,r;
    cin>>n>>l>>r;
    vector<ll>v;
    for(int i=1;i<=n;i++){
        ll k = l/i+(l%i!=0);
        if(k*i<=r){
            v.push_back(k*i);
        }
        else{
            cout<<"NO"<<endl;
            return;
        }

        
    }
    cout<<"YES"<<endl;
    for(auto i:v){
        cout<<i<<" ";
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