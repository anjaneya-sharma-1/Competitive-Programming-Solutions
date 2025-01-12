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
    ll maxi=0;
    ll ind=0;
    for(int i=0;i<n;i++){
        if(s[i]=='p'){
            if(ind!=0){
                ll num=i+1;
                if(i-ind+1<min(num,maxi)){
                    cout<<"NO"<<endl;
                    return;
                }
            }
            c++;
        }
        if(s[i]=='s'&&c>0){
            cout<<"NO"<<endl;
            return;
        }
        if(s[i]=='s'){
            ind=i;
            maxi=n-i;
        }
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