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
    int sum =0;
    for(int i =0;i<n;i++){
        ll curr;
        cin>>curr;
        sum+=curr;
    }
    if((y+x+sum)%2==0){
        cout<<"Alice"<<endl;
    }
    else{
        cout<<"Bob"<<endl;
    }
    
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