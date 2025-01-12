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
    ll c=0;
    for(int i=0;i<n;i++){
        if(s[i]=='0'){
            c++;
        }
    }
    if(c==1){
        cout<<"BOB"<<endl;
    }
    else if(c%2==0){
        cout<<"BOB"<<endl;
    }
    else{
        cout<<"ALICE"<<endl;}
    
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