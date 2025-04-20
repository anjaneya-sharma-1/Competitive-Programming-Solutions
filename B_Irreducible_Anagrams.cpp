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
    vector<vector<ll>>pre(n,vector<ll>(26,0));
    for(int i=0;i<n;i++){
        if(i!=0)pre[i]=pre[i-1];
        pre[i][s[i]-'a']++;
    }
    ll q;
    cin>>q;
    while(q--){
        ll l,r;
        cin>>l>>r;
        l--;
        r--;
        if(s[l]!=s[r]||l==r){
            cout<<"Yes"<<endl;
            continue;
        }
        ll count=0;
        for(int i=0;i<26;i++){
            count+=(pre[r][i]>(l>0?pre[l-1][i]:0));
        }
        if(count>=3){
            cout<<"Yes"<<endl;
            continue;
        }
        cout<<"No"<<endl;
    }
    
}

};
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    ll t=1;
    
    while (t--){ 
        Solution* s = new Solution(); 
        s->solve();
      

        }
    return 0;
}