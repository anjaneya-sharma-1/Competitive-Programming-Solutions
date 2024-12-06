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
    vector<pair<ll,ll>> v;
    for(int i =0;i<n;i++){
        ll curr;
        cin>>curr;
        v.push_back({curr,i+1});
    }
    for(int i =0;i<n;i++){
        ll curr;
        cin>>curr;
        v[i].first-=curr;
    }
    sort(v.begin(),v.end());
    ll maxi = v[n-1].first;
    ll c= 0;
    for(int i = 0;i<n;i++){
        if(c==0&&maxi ==v[i].first){
            c=1;
            cout<<n-i<<endl;
        }
        if(c==1&&maxi==v[i].first){
            cout<<v[i].second<<" ";
        }
    };
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