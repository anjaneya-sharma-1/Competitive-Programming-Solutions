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
    ll c=0;
    for(int i =0;i<2*n;i++){
        ll curr;
        cin>>curr;
        if(curr){
            c++;
        }
    }
    ll mini = c%2;
    ll maxi = c;
    if(c>n){
        maxi-=(2*(c-n));
    }
    cout<<mini<<" "<<maxi<<endl;
    
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