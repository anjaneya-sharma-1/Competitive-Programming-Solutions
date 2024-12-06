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
    string s1,s2;
    cin>>s1;
    cin>>s2;
    int t=1;
    int c1=0;
    int c2=0;
    for(int i=0;i<n;i++){
        if(s1[i]==s2[i]&&t==2){
            if(c1!=c2){
                cout<<"NO"<<endl;
                return;
            }
            t=1;
        }
        if(s1[i]!=s2[i]&&t==1){
            if(c1!=c2){
                cout<<"NO"<<endl;
                return;
            }
            t=2;
        }
        c1+=s2[i]=='0';
        c2+=s2[i]=='1';
    }
    if(t==2&&c1!=c2){
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;
    
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