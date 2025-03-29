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
    vector<ll>ans;
    ll last=0;
    for(int i=0;i<n;i++){
        ll x;
        cin>>x;
        if(i==0)ans.push_back(x);
        else{
            if(x>=last){
                ans.push_back(x);}
                else{
                    ans.push_back(1);
                    ans.push_back(x);

                }
            }
            last=x;
        }
        
    
    cout<<ans.size()<<endl;
    for(int i=0;i<ans.size();i++){
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