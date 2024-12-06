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
       
        vector<ll>v(n+1);
        for(int i=1;i<=n;i++){
            ll curr;
            cin>>curr;
            v[i]=(curr);
        }
        for(int i=1;i<=n;i+=2){
            if((v[i]==i+1&&i<n&&v[i+1]==i)){
                continue;
            }
            else if(v[i]==i){
                i-=1;
                continue;
            }
            else{
                cout<<"NO"<<endl;
                return;
            }
        }
        cout<<"YES"<<endl;
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