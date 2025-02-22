#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
void solve() {
    ll n,t,i,flag;
    cin>>n;
		flag=0;
		for(i=0;i<n;i++)
		{
			cin>>t;
			if(t<=i*2||t<=(n-i-1)*2)flag=1;
		}
		if(flag)cout<<"NO\n";
		else cout<<"YES\n";

    
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
        delete s; 

        }
    return 0;
}