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
    map<char,ll>m;
    for(int i=0;i<n;i++){
        m[s[i]]++;
    }
    ll ans=INT_MAX;
    ll i=0;
    ll j=0;
    map<char,ll>temp;
    ll count=0;
    while(j<n){
        temp[s[j]]++;
        if(temp[s[j]]==1){
            count++;
        }
        while(count==m.size()){
            ans=min(ans,j-i+1);
            temp[s[i]]--;
            if(temp[s[i]]==0){
                count--;
            }
            i++;
        }
        j++;
    }
    cout<<ans<<endl;
    
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