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
    for(int k =2;((k*k)+k+1)<=n;k++)
    {
        ll curr=(k*k)+k+1;
        ll i=3;
        while(curr<=n){
            if(curr==n){
                cout<<"YES"<<endl;
                return;
            }
            curr+= pow(k,i++);
        }
    }
    cout<<"NO"<<endl;
    
    
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