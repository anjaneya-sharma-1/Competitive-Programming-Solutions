#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
void solve() {
    ll n,c;
    cin>>n>>c;
    string s;
    cin>>s;
   
    vector<ll>v(5,0);
    for(ll i=0;i<n;i++){
        v[s[i]-'A']++;
    }
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    while(v.back()==0){
        v.pop_back();
    }
    ll tot=0;
    ll ans=v.size()*c;
    for(ll i=v.size()-1;i>=0;i--){
        
        tot+=v[i];
        ans=min(ans,(tot*(tot+1)/2)+(i)*c);

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