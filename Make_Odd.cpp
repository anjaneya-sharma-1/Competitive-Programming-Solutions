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
   string s2;
   cin>>s1;
    cin>>s2;
    ll count=0;
    ll count2=0;
    for(int i=0;i<n;i++){
        count+=((s1[i]=='1')&&(s2[i]=='1'));
        count2+=((s1[i]=='1'&&s2[i]=='0')||(s2[i]=='1'&&s1[i]=='0'));
    } 
    if((count==n&&count%2==0)||(count%2==0&&count2==0)){
        cout<<"NO"<<endl;
    }
    else {
        cout<<"YES"<<endl;
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