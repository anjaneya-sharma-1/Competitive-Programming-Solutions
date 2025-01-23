#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
void solve() {
    int n;
		cin>>n;
		for(int i=1;i<=n-2;i++){
			cout<<i<<' '<<i<<"\n";
		}
		cout<<n-1<<' '<<n<<"\n"<<n<<' '<<n<<"\n";
        cout<<endl;
    
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