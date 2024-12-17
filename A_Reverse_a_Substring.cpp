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
    string s;
    cin>>s;
    for(int i=1;i<n;i++){
        if(s[i]<s[i-1]){
            cout<<"YES"<<endl;
            cout<<i<<" "<<i+1<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
    
}

};
int main(){
    ll t=1;
    
    
    while (t--){ 
        Solution* s = new Solution(); 
        s->solve();
        delete s; 

        }
    return 0;
}