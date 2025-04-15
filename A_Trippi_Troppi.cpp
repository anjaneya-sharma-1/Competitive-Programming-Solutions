#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
void solve() {
    string s;
    getline(cin,s);
    ll n=s.size();
    s=' '+s;
    for(int i=1;i<=n;i++){
        if(s[i-1]==' '){
            cout<<s[i];
        }
    }
    cout<<endl;    
    
}

};
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    ll t;
    cin >> t;
    
    string s;
    getline(cin,s);
    while (t--){ 
        Solution* s = new Solution(); 
        s->solve();
      

        }
    return 0;
}