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
    ll countn=0;
    ll countp=0;
    for(int i=0;i<n;i++){
        ll x;
        cin>>x;
        if(x<0){
            countn++;
        }
        else if(x>0){
            countp++;
        }
    }
    if(countp>=countn){
        cout<<countn%2<<endl;
        return;
    }
    else {
        ll sum=countn-countp;
        ll op=sum/2 +(sum%2);
        cout<<op+(countn-op)%2<<endl;
        return;
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
      

        }
    return 0;
}