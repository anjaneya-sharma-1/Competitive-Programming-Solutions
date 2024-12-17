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
    int c=1;
    for(int i=n-1;i>=1;i--){

        cout<<i<<" ";
        if(c&&__builtin_popcount(i)==1){
            cout<<0<<" ";
            c=0;
        }
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