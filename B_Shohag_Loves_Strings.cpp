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
    ll n=s.size();
    if(n==1){
        cout<<-1<<endl;
        return;
    }
    for(int i=0;i<n-1;i++){
        if(s[i]==s[i+1]){
            cout<<s[i]<<s[i+1]<<endl;
            return;
        }
    }
    for(int i=0;i<n-2;i++){
        if(s[i]!=s[i+1]&&s[i+1]!=s[i+2]&&s[i]!=s[i+2]){
            cout<<s[i]<<s[i+1]<<s[i+2]<<endl;
            return;
        }
    }
    cout<<-1<<endl;
}

};
int main(){
    ll t;
    cin >> t;
    
    while (t--){ 
        Solution* s = new Solution(); 
        s->solve();
        delete s; 

        }
    return 0;
}