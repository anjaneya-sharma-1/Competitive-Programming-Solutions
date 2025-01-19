#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007

class Solution{
    public:
    

    
void solve() {
    ll q;
    cin>>q;
    priority_queue<pair<ll,ll>>pq;
    ll i=1;
    ll l=1;
    vector<ll>v(q+1,0);
    while(q--){
        ll a;
        cin>>a;
        if(a==1){
            ll m;
            cin>>m;
            pq.push({m,-(i++)});
            continue;
        }
        if(a==2){
            while(v[l]!=0){
                l++;
            }
            v[l]=1;
            cout<<l<<" ";
            continue;
        }
        if(a==3){
            while(v[pq.top().second*-1]!=0){
                pq.pop();
            }
            pair<ll,ll>temp=pq.top();
            pq.pop();
            temp.second*=-1;
            v[temp.second]=1;
            cout<<temp.second<<" ";
            continue;
        }
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