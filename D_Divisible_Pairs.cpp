#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
void solve() {
    ll n,x,y;
    cin>>n>>x>>y;
    map<pair<ll,ll>,ll> m;
    ll count =0;
    for(int i =0;i<n;i++){
        ll curr;
        cin>>curr;
        if(m.find({curr%x,curr%y})!=m.end()){
            count+=m[{curr%x,curr%y}];
        }
        m[{x-(curr%x),curr%y}]++;
        m[{0-(curr%x),curr%y}]++;
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