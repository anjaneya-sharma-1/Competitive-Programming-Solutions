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
    vector<ll>v(m);
    for(int i =0;i<n;i++){
        ll x;
        cin>>x;
        v[x%m]++;
    }
    ll c=0;
    if(v[0]>0){
        c++;
    }
    for(int i=1;i<=m/2;i++){
        if(v[i]>0 && v[m-i]>0){
            c++;
            c+=abs(v[i]-v[m-i]);
            if(abs(v[i]-v[m-i])!=0){
                c--;
            }
        }
        else if(v[i]>0){
            c+=v[i];
        }
        else if(v[m-i]>0){
            c+=v[m-i];
        }
    }
    cout<<c<<endl;
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