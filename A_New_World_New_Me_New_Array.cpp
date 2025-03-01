#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
void solve() {
    ll n,p,k;
    cin>>n>>k>>p;
    k=abs(k);
    if(k/p+(k%p!=0)>n){
        cout<<-1<<endl;
        return;}
    cout<<(k/p+(k%p!=0))<<endl;
    
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