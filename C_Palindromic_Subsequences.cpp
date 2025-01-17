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
    if(n==6){
        cout<<"1 1 2 3 1 2"<<endl;
        return;
    }
    cout<<1<<" "<<2<<" ";
    for(int i=3;i<=n-2;i++){
        cout<<i<<" ";
    }
    cout<<1<<" "<<2<<endl;
    
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