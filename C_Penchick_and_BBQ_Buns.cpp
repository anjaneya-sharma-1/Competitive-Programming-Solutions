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
    if(n%2==0){
        for(int i =1;i<=n;i+=2){
            cout<<i<<" "<<i<<" ";
        }
        cout<<endl;
    }
    else if(n<27){
        
        cout<<-1<<endl;
    }
    else{
        vector<ll>ans ={1,2,2,3,3,4,4,5,5,1,6,6,7,7,8,8,9,9,10,10,11,11,13,12,12,1,13};
        for(int i=0;i<27;i++){
            cout<<ans[i]<<" ";
        }
        for(int i=1;i<=n-27;i+=2){
            cout<<i+14<<" "<<i+14<<" ";
        }
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