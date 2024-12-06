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
    ll count=0;
    ll c=0;
    for(int i=0;i<n;i++){
        if(s[i]=='.'){
            c++;
        }
        else{
            if(c>=3){
                cout<<2<<endl;
                return;
                
            }
            else{
                count+=c;
            }
            c=0;
        }
    }
    if(c>=3){
                cout<<2<<endl;
                return;
            }
            else{
                count+=c;
            }
    cout<<count<<endl;
    
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