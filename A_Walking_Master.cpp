#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
void solve() {
    int a,b,c,d;
		cin>>a>>b>>c>>d;
		if(b<=d&&c<=a+d-b) {
			cout<<(d-b)+(a+d-b-c)<<"\n";
		} else {
			cout<<"-1\n";
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