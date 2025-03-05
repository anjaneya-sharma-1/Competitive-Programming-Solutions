#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
void solve() {
    string s;
    cin>>s;
    char c=s[0];
    ll n=s[1]-'0';
    for(int i=1;i<=8;i++){
        if(i!=n){
            cout<<c<<i<<endl;
        }
        if((i-1)+'a'!=c){
            cout<<(char)((i-1)+'a')<<n<<endl;
        }
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
        delete s; 

        }
    return 0;
}