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
    if(n%2==0){
        cout<<-1<<endl;
        return;
    }
    vector<ll>ans(n,-1);
    int j=0;
    for(int i=1;i<=n;i+=2){
        ans[j++]=i;
    }
    for(int i=2;i<=n;i+=2){
        ans[j++]=i;
    }
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
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