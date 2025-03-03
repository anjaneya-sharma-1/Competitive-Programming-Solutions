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
    vector<ll>freq(26,0);
    for(ll i=0;i<n;i++){
        freq[s[i]-'a']++;
    }
    vector<vector<vector<ll>>> f(26,vector<vector<ll>>(s.size(),vector<ll>(26,0)));
    for(ll i=0;i<s.size();i++){
        ll j=(i+1)%n;
        ll count=0;
        while(j!=i){
            f[s[i]-'a'][count++][s[j]-'a']++;
            j=(j+1)%n;
        }
    }
    double ans=0;
    for(ll i=0;i<26;i++){
        ll maxi=0;
        ll sum=0;
        for(ll j=0;j<n-1;j++){
            ll count=0;
            for(ll k=0;k<26;k++){
                count+=(f[i][j][k]==1);
            }
            maxi=max(maxi,count);
        }
        ans+=(maxi*1.0);
        
        
    }
    cout<<fixed<<setprecision(15)<<(ans*1.0)/(n*1.0);
}

};
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    ll t=1;
    
    
    while (t--){ 
        Solution* s = new Solution(); 
        s->solve();
        delete s; 

        }
    return 0;
}