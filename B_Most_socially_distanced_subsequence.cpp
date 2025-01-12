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
    vector<ll>v;
    for(int i =0;i<n;i++){
        ll curr;
        cin>>curr;
        v.push_back(curr);
    }
    vector<ll>ans;
    for(int i=0;i<n;i++){
        if(i==0){
            ans.push_back(v[i]);
        }else if(i==n-1){
            ans.push_back(v[i]);
        }else{
            if(v[i-1]<v[i]&&v[i]>v[i+1]){
                ans.push_back(v[i]);
            }
            if(v[i-1]>v[i]&&v[i]<v[i+1]){
                ans.push_back(v[i]);
            }
        }
    }
    cout<<ans.size()<<endl;
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
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