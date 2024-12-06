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
        ll k;
        cin>>k;
        ll maxi = 0;
        for(int i =0;i<k;i++){
            ll curr;
            cin>>curr;
            maxi=max(curr-i+1,maxi);
        }
        v.push_back({maxi,k});
        //cout<<v[i].first<<" "<<v[i].second<<endl;
    }
    sort(v.begin(),v.end());
    ll maxi =v[0].first;
    ll curr =v[0].first;
    for(int i=0;i<n;i++){
        //cout<<curr<<v[i].first<<" "<<v[i].second<<endl;
        if(curr<v[i].first){
            maxi+=v[i].first-curr;
            curr=v[i].first;
        }
        curr+=v[i].second;

    }
    cout<<maxi<<endl;
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