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
    ll a[n];
    vector<ll> b(n,0);
    ll sum=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    for(int i=0;i<n-1;i++){
        ll l,r;
        cin>>l>>r;
        b[l-1]++;
        b[r-1]++;
    }
    priority_queue<pair<ll,ll>> pq;
    for(int i=0;i<n;i++){
        if(b[i]>1){
        pq.push({a[i],b[i]-1});}
    }
    ll k=n-2;
    cout<<sum<<" ";
    while(!pq.empty()&&k){
        auto p=pq.top();
        while(p.second&&k){
            sum+=p.first;
            cout<<sum<<" ";
            k--;
            p.second--;
        }
        pq.pop();
    }
    while(k){
        cout<<sum<<" ";
        k--;
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