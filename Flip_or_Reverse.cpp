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
    string a;
    string b;
    cin>>a;
    cin>>b;
    if(a==b){
        cout<<0<<endl;
        return;
    }
    string c=a;
    reverse(c.begin(),c.end());
    if(c==b){
        cout<<1<<endl;
        cout<<2<<" "<<1<<" "<<n<<endl;
        return;
    }
    ll ans=0;
    vector<pair<ll,ll>>lr;
    ll l=-1;
    ll right=-1;
    for(ll r=0;r<n;r++){
        if(a[r]==b[r]){
            if(l==-1){
                continue;
            }
            else{
                lr.push_back({l,right});
                l=-1;
                ans++;
            }
        }
        else{
            if(l==-1){
                
                l=r+1;
                
            }
            right=r+1;
        }
    }
    if(l!=-1){
        ans++;
        lr.push_back({l,n});
    }
    cout<<ans<<endl;
    for(ll i=0;i<lr.size();i++){
        cout<<1<<" "<<lr[i].first<<" "<<lr[i].second<<endl;
    }
    
}

};
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    ll t;
    cin >> t;
    
    
    while (t--){ 
        Solution* s = new Solution(); 
        s->solve();
        delete s; 

        }
    return 0;
}