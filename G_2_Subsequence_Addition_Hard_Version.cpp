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
    for(int i=0;i<n;i++){
        ll curr;
        cin>>curr;
        v.push_back(curr);
    }
    sort(v.begin(),v.end());
    if(v[0]!=1){
        cout<<"NO"<<endl;
        return;
    }
    else{
        for(int i=1;i<n;i++){
            if(v[i]>v[i-1]){
                cout<<"NO"<<endl;
                return;
            }
            v[i]+=v[i-1];
        }
        cout<<"YES"<<endl;
    }
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