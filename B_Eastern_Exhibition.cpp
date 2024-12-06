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
    vector<ll>x;
    vector<ll>y;
    for(int i =0;i<n;i++){
        ll a , b;
        cin>>a>>b;
        x.push_back(a);
        y.push_back(b);
    }
    sort(x.begin(),x.end());
    sort(y.begin(),y.end());
    ll xans =1;
    ll yans=1;
    if(n%2==0){
        xans = abs(x[n/2]-x[n/2 -1]) +1;
        yans=abs(y[n/2]-y[n/2 -1])+1;}
    cout<<xans*yans<<endl;
    
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