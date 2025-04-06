#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define fr(i,a,b) for(int i=a;i<b;i++)
#define MOD 1000000007
class Solution{
    public:
void solve() {
    
        ll n; cin>>n;
        if(n%2==0)cout<<"-1\n";
        else{
            cout<<n<<" ";
            fr(i,1,n)cout<<i<<" ";
            cout<<endl;
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