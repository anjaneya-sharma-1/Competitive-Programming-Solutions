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
    vector<ll>v;
    v.push_back(1);
    for(int i=2;i<=14;i++){
        v.push_back(i*v.back());
    }
    int mini=100;
    for(int i=0;i<(1<<14);i++){
        ll sum=n;
        for(int j=0;j<14;j++){
            if((i>>j&1)){
                sum-=v[j];
            }
        }
        if(sum>=0){
            mini=min(mini,__builtin_popcountll(sum) +__builtin_popcount(i));

        }
    }
    cout<<mini<<endl;
    
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