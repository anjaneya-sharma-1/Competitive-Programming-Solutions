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
    ll temp=n;
    ll count=0;
    ll curr=0;
    ll d=0;
    ll pw=1;
    ll ans=0;
    while(temp){
        ll digit=temp%10;
        curr+=digit*pw;
        pw*=10;
        temp/=10;
        if(curr%25==0){
            count=d;
            ans=0;
        }
        else{
        ans+=(digit!=0);}
        d++;
    }
    cout<<ans<<endl;


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