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
    ll total =0;
    string s;
    cin>>s;
    vector<ll> m(n,0);
    for(int i =0;i<n;i++){
        if(s[i]=='0'){
            for(int j=i;j<n;j+=i+1){
                if(s[j]=='1'){
                    break;
                }
                if(m[j]!=0){
                    continue;
                }
                m[j]=1; 
                total+=i+1;
            }
        }
    }
    cout<<total<<endl;
    
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