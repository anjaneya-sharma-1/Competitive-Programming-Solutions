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
    ll n=s.length();
    ll ans=1;
    ll count=0;
    for(int i=0;i<n;i++){
        if(s[i]=='a'){
            count++;
        }
        else if(s[i]=='b'&&count>0){
            ans=((ans*(count+1)))%MOD;
            count=0;
        }
    }
    ans=((ans*(count+1)))%MOD;
    cout<<ans-1<<endl;
    
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