#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
void solve() {
    ll n,k,b,s;
    cin>>n>>k>>b>>s;
    if(((s-k*b))>k*(n-1)||s<k*b){
        cout<<-1<<endl;
    }
    else{
        s-=k*b;
        ll l;
        l=k-1;
        if(l>s){
            l=s;
        }
        for(ll i =1;i<n;i++){
            cout<<l<<" ";
            s-=l;
            if(l>s){
                l=s;
            }
        }
        cout<<k*b+s<<" ";
        cout<<endl;
        }
       
    
}

};
int main(){
    ll t;
    cin >> t;
    Solution s;
    while (t--) s.solve();
    return 0;
}