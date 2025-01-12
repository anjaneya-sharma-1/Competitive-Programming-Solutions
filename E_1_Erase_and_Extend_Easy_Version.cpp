#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
void solve() {
    ll n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    string ans=s;
    while(ans.size()<k){
        ans+=s;
    }
    ans=ans.substr(0,k);
    for(ll i=1;i<n;i++){
        string temp=s.substr(0,i);
        while(temp.size()<k){
            temp+=temp;
        }
        temp=temp.substr(0,k);
        if(temp<ans){
            ans=temp;
        }
}
    cout<<ans<<endl;
    

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