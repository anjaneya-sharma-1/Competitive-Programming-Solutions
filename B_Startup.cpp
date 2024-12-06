#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
void solve() {
    ll n ,k;
    cin>>n>>k;
    unordered_map<ll,ll> m;
    for(int i =0;i<k;i++){
        ll b,c;
        cin>>b>>c;
        m[b]+=c;
    }
    priority_queue<ll>pq;
    ll total =0;
    for(auto tc : m){
        pq.push(tc.second);
    }
    while(!pq.empty()&&n--){
        total+=pq.top();
        pq.pop();
    }
    cout<<total<<endl;


    
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