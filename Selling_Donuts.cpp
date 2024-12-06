#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
void solve() {
    ll n,m;
    cin>>n>>m;
    vector<ll>v(n+1,0);
    for(int i=1;i<=n;i++){
        ll curr;
        cin>>curr;
        v[i]=curr;
    }
    ll count=0;
    for(int i=1;i<=m;i++){
        ll curr;
        cin>>curr;
        if(v[curr]==0){
            count++;
        }
        else{
            v[curr]--;
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