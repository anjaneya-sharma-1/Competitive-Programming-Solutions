
#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
void solve(){
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll ans=1;
 
    ll c=1;
    char f= s[0];
    for(int i=1;i<n;i++){
        if(s[i]==s[i-1]){
            c++;
        }
        else{
            ans=max(ans,c+1);
            c=1;
        }
    }
    ans=max(ans,c+1);
    cout<<ans<<endl;
 
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}