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
    ll ans=0;
   
        for(int i=0;i<k/2;i++){
            vector<ll>f(26,0);
            ll sum=0;
            for(int j=i;j<n;j+=k){
                sum++;
                f[s[j]-'a']++;
            }
            for(int j=k-i-1;j<n;j+=k){
                sum++;
                f[s[j]-'a']++;
            }
            ll max1=*max_element(f.begin(),f.end());
            
            ans+=sum-max1;
        }
        if(k%2){
            vector<ll>f(26,0);
            ll sum=0;
            for(int j=k/2;j<n;j+=k){
                sum++;
                f[s[j]-'a']++;
            }
            ll max1=*max_element(f.begin(),f.end());
            ans+=sum-max1;
        }
        cout<<ans<<endl;
    
    
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