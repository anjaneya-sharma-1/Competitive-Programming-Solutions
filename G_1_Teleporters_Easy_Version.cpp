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
    vector<ll>v;
    for(int i=1;i<=n;i++){
        ll curr;
        cin>>curr;
        v.push_back(curr+i);
    }
    sort(v.begin(),v.end());
    int i=0;
    while(i<n&&c-v[i]>=0){
        c-=v[i];
        i++;
    }
    cout<<i<<endl;
    
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