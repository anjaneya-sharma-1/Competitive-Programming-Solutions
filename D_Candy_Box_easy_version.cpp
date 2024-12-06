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
    map<ll,ll> m;
    for(int i=0;i<n;i++){
        ll curr;
        cin>>curr;
        m[curr]++;
    }
    priority_queue<ll>pq;
    for(auto a : m){
        pq.push(a.second);
    }
    ll sum=0;
    ll prev=n+1;
    while(!pq.empty()){
        ll curr=pq.top();
        ll addd=min(max(prev-1,0LL),curr);
        sum+=addd;
        prev=addd;
        pq.pop();
    }

    cout<<sum<<endl;
    
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