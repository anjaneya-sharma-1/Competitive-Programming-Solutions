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
    vector<ll> v(n);
    vector<ll> p;
    for(auto &a: v){
        cin>>a;
    }
    for(int i =0;i<n;i++){
        ll curr;
        cin>>curr;
        p.push_back(curr-v[i]);
    }
    sort(p.begin(), p.end());
    ll l=0;
    ll r=n-1;
    ll ans=0;
    ll sum=0;
    while(l<=r){
        if(p[l]>0){
            ans++;
            l++;
            continue;
        }
        if(p[l]==0){
            ans++;
            l++;
            continue;
        }
        if(sum==0){
            r--;
            sum+=p[r];
            continue;
        }
        if(sum>0&&p[l]+sum<0){
            ans++;
            r--;
            sum=r;
        }
    }
    cout<<ans<<endl;
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