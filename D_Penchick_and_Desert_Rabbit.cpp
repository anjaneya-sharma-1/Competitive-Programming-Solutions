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
    priority_queue<ll,vector<ll>,greater<>>pq3;
    vector<ll>a(n,0);
    a[0]=v[0];
    map<ll,ll>m;
    for(int i=1;i<n;i++){
        a[i]=max(a[i-1],v[i]);
    }
    int i=n-1;
    vector<ll>ans;
    for(int j=n-1;j>=0;j--){
        ll curr=v[j];
        ll maxi=a[j];
        if(!pq3.empty()&&(a[j]>pq3.top())){
            maxi=max(maxi,m[pq3.top()]);
        }
        pq3.push(v[j]);
        m[v[j]]=max(maxi,m[v[j]]);
        ans.push_back(maxi);
    }
    reverse(ans.begin(),ans.end());
    for(int i=0;i<n;i++){
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