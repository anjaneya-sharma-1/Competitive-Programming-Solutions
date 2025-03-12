#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
void solve() {
    ll x,y,k;
    cin>>x>>y>>k;
    if(x>y){
        swap(x,y);
    }
    if(y+x<k||((y-x)%2!=k%2)){
        cout<<-1<<endl;
        return;
    }
    if(y-x<k){
        cout<<(k-(y-x))/2<<endl;
    }
    else{
        cout<<((y-x)-k)/2<<endl;
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