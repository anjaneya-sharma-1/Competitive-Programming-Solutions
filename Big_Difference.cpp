#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
void solve() {
    ll n,k;
    cin>>n>>k;
    if(n<=k){
        cout<<-1<<" "<<-1<<endl;
        return;
    }
    if(k==1){
        if(n<=2){
            cout<<-1<<" "<<-1<<endl;
            return;
        }
        cout<<1<<" "<<3<<endl;
        return;
    }
    ll b=k+2;
    if(b%2==0){
        b++;
    }
    if(b>n){
        cout<<-1<<" "<<-1<<endl;
        return;
    }   
    cout<<2<<" "<<b<<endl;
    
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