#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
void solve() {
    ll n,k;
    cin>>n>>k;
    vector<ll>a;
    map<ll,ll>coins;
    map<ll,ll>pos;
    for(int i=0;i<n;i++){
        ll curr;
        cin>>curr;
        a.push_back(curr);
        pos[curr]=i;
    }
    for(int j=0;j<n;j++){
        ll coin;
        cin>>coin;
        coins[a[j]]=coin;
    }
    sort(a.begin(),a.end());
    ll sum=0;
    vector<ll>ans(n);
    priority_queue<ll,vector<ll>,greater<ll>>pq;
    for(int i=0;i<n;i++){
        ll curr=coins[a[i]];
        ll ind=pos[a[i]];
        ans[ind]=curr;
        ans[ind]+=sum;
        if(pq.size()<k){
            pq.push(curr);
            sum+=curr;
        }
        else{
            if(!pq.empty()&&curr>pq.top()){
                sum-=pq.top();
                sum+=curr;
                pq.pop();
                pq.push(curr);
            }
        }
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
    ll t=1;
    
    
    while (t--){ 
        Solution* s = new Solution(); 
        s->solve();
        delete s; 

        }
    return 0;
}