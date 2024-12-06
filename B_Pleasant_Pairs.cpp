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
    vector<ll> v(2*n+1,0);
    ll count=0;
    for(int i=1;i<=n;i++){
        ll curr;
        cin>>curr;
       
        v[curr]=i;
        for(int j=1;j<=2*n/curr;j++){
            //cout<<j<<curr<<" ";
            if(i!=v[j]&&v[j]!=0&&j*curr==i+v[j]){
                count++;
            }
        }
    }
    cout<<count<<endl;
    
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