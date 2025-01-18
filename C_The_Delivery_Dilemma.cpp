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
    vector<ll>a(n);
    vector<ll>b(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    ll sum=0;
    for(int i=0;i<n;i++){
        cin>>b[i];
        sum+=b[i];
    }
    vector<ll>v=a;
    v.push_back(sum);
    //sort(v.begin(),v.end());
    ll l=0;
    ll r=1e9;
    while(l<r){
        ll mid=(l+r)/2;
        ll tot=0;
        for(int i=0;i<n;i++){
            if(a[i]>mid){
                tot+=b[i];
            }
        }
        if(tot<=mid){
            r=mid;
        }
        else{
            l=mid+1;
        }
    }
    cout<<l<<endl;

    
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