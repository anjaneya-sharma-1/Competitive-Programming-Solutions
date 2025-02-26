#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
void solve() {
    map<ll,ll> m;
    ll count=4;
    for(int i=0;i<4;i++){
        ll x;
        cin>>x;
        if(m.find(x)==m.end()){
            m[x]=1;
            count--;
        }
    }
    cout<<count<<endl;
    
}

};
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    ll t=1;
    
    
    while (t--){ 
        Solution* s = new Solution(); 
        s->solve();
        delete s; 

        }
    return 0;
}