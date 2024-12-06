#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:

ll hlpr(){

}
void solve() {
    ll n;
    cin>>n;
    string s(n,'3');
    s[n-1]='6';
    s[n-2]='6';
    if(n==1||n==3){
        cout<<-1<<endl;
        return;
    }
    else if(n%2==0){
        cout<<s<<endl;
        return;
    }
    else{
        s[n-4]='6';
        cout<<s<<endl;
        return;
    }
    
    
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