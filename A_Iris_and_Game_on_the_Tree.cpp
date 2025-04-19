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
    vector<ll>deg(n+1,0);
    for(int i=0;i<n-1;i++){
        ll u,v;
        cin>>u>>v;
        deg[u]++;
        deg[v]++;
    }
    string s;
    cin>>s;
    ll one=0;
    ll zero=0;
    ll q=0;
    ll tot=0;
    for(int i=2;i<=n;i++){
        if(s[i-1]=='?'){
            tot++;
        }
        if(deg[i]==1){
            if(s[i-1]=='?'){
                q++;
            }
            else if(s[i-1]=='0'){
                zero++;
            }
            else{
                one++;
            }
        }

    }
    tot-=q;
    if(s[0]!='?'){
        if(s[0]-'0'){
            cout<<zero+(q+1)/2<<endl;
        }
        else{
            cout<<one+(q+1)/2<<endl;
        }
    }
    else{
        if(one==zero){
            if(tot%2){
                cout<<one+(q+1)/2<<endl;
            }
            else{
                cout<<one+q/2<<endl;
            }
        }
        else{
            cout<<max(zero,one)+q/2<<endl;
        }
    }
    
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