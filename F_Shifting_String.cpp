#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
    bool leftShift(string s , int k){
        string temp = s;
        ll n=s.size();
        for(int i=0;i<s.size();i++){
            if(s[i]!=s[(i-k+n)%n]) return 0;
        }
        return 1;   }
void solve() {
    ll n;
    string s;
    cin>>n>>s;
    vector<ll>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
        a[i]--;

    }
    vector<ll>szs;
    vector<ll>vis(n,0);
    ll gc=0;
    for(ll i=0;i<n;i++){
        if(vis[i]) continue;
        ll j=i;
        ll cnt=0;
        string temp;
        while(vis[j]==0){
            vis[j]=1;
            j=a[j];
            temp+=s[j];
            cnt++;
        }
        ll tot=cnt;
        for(ll count2=1;count2<=cnt;count2++){
            if(leftShift(temp,count2)){
                tot=min(tot,count2);
                break;
            }
        }
        szs.push_back(tot);
        gc=__gcd(gc,tot);
    }
    for(int i=0;i<szs.size();i++){
        ll temp=szs[i]/(__gcd(szs[i],gc));
        gc*=temp;
    }
    cout<<gc<<endl;
    
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