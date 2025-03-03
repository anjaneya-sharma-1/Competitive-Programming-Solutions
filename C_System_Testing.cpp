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
    map<ll,ll> m;
    priority_queue<pair<ll,ll>,vector<pair<ll,ll>>,greater<>> pq;  
    queue<ll> q;
    for(ll i=0;i<n;i++){
        ll x;
        cin>>x;
        q.push(x);
    }
    for(ll i=0;i<min(n,k);i++){
        pq.push({q.front(),0});
        m[0]++;
        q.pop();
    }
    ll done=0;
    ll time=1;
    ll ans=0;
    while(done<n){
        ll percentage=round((done*100.0)/n);
        ans+=m[time-percentage]; 
        m[time-percentage]=0; 
        while(!pq.empty()&&pq.top().first==time){ 
            m[pq.top().second]=max(0ll,m[pq.top().second]-1);
            pq.pop();
            done++;
            if(!q.empty()){
                ll x=q.front();
                q.pop();
                pq.push({time+x,time});
                m[time]++;
            }
        }
        time++;
    }
    cout<<ans;
    
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