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
    string s1;
    cin>>s1;
    string s2;
    cin>>s2;
    ll diff=0;
    for(ll i=0;i<n;i++){
        if(s1[i]!=s2[i]){
            diff++;
        }
    }
    ll one=0;
    ll zero=0;
    for(ll i=0;i<n;i++){
        if(s1[i]==s2[i]){
        if(s1[i]=='1'){
            one++;
        }
        else{
            zero++;
        }}
    }
   if(n%2==0){
        if(one%2||zero%2||diff%2){
            cout<<"NO"<<endl;
            return;
        }
   }
   else{
    if(one%2+zero%2+diff%2!=1){
        cout<<"NO"<<endl;
        return;
    }
   }
    cout<<"YES"<<endl;
    
    
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