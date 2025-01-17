#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
void solve() {
    ll n,m;
    cin>>n>>m;
    ll x=0;
    ll y=0;
    for(int i=0;i<n;i++){
        ll a,b;
        cin>>a>>b;
        if(i!=0){
            
            
            x+=2*(m-a);
            y+=2*(m-b);
        }
    }
   
    cout<<4*m*n-x-y<<endl;
    
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