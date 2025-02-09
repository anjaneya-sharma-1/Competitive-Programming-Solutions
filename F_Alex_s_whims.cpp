#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
void solve() {
    ll n,q;
    cin>>n>>q;
    ll u=n;
    ll v1=n-1;
    for(int i=1;i<n;i++){
        cout<<i<<" "<<i+1<<endl;
    }
    while(q--){
        ll d;
        cin>>d;
        if(d==v1){
            cout<<"-1 -1 -1"<<endl;

        }
        else{
            cout<<u<<" "<<v1<<" "<<d<<endl;
            v1=d;
        }
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
        delete s; 

        }
    return 0;
}