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
    ll n=s.size();
    ll ans=0;
    
    for(ll i=0;i<n-1;i++){
        if(s[i]==s[i+1]||s[i]=='?'||s[i+1]=='?'){
         
            ans=max(ans,2LL);
        }
    }
    ll start=n-n%2;
    for(ll i=start;i>=2;i-=2){
        ll count=0;
        for(ll j=0;j+i/2<n;j++){
            if(s[j]==s[j+i/2]||s[j]=='?'||s[j+i/2]=='?'){
                count++;
                if(count==i/2){
                    cout<<i<<endl;
                    return;
                }
            }
            else{
                count=0;
            }
        }
    }
    cout<<ans<<endl;
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