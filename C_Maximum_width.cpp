#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
void solve() {
    ll n,m;
    cin>>n>>m;
    string s;
    cin>>s;
    string t;
    cin>>t;
    vector<ll>pre;

    int j=0;
    for(int i=0;i<m;i++){
        while(j<n&&s[j]!=t[i]){
            j++;
        }
        pre.push_back(j);
        j++;
    }
    vector<ll>post;
    j=n-1;
    for(int i=m-1;i>=0;i--){
        while(j>=0&&s[j]!=t[i]){
            j--;
        }
        post.push_back(j);
        j--;
    }
    reverse(post.begin(),post.end());
    ll ans=0;
    for(int i=0;i<m-1;i++){
        ans=max(ans,post[i+1]-pre[i]);
    }
    cout<<ans<<"\n";

    
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