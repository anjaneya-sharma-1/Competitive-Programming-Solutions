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
    string s2=s;
    reverse(s2.begin(),s2.end());
    if(s>=s2&&k==0){
        cout<<"NO"<<endl;
        return;
    }
    int count=0;
    vector<ll>f(26,0);
    for(ll i=0;i<n;i++){
        count+=(f[s[i]-'a']==0);
        f[s[i]-'a']++;
    }
    if(count>1||s<s2){
        cout<<"YES"<<endl;
        return;
    }
    cout<<"NO"<<endl;
    
    
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
      

        }
    return 0;
}