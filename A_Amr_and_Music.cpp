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
    vector<pair<ll,ll>>v;
    for(int i=1;i<=n;i++){
        ll curr;
        cin>>curr;
        v.push_back({curr,i});
    }
    sort(v.begin(),v.end());
    ll sum=0;
    ll ans=-1;
    for(int i =0;i<n;i++){
        sum+=v[i].first;
        if(sum>k){
            cout<<i<<endl;
            ans=i;
            break;
        }
        
    }
    if(ans==-1){
        cout<<n<<endl;
        for(int i=0;i<n;i++){
        cout<<i+1<<" " ;
    }
    cout<<endl;
    return;
    }
    
    for(int i=0;i<ans;i++){
        cout<<v[i].second<<" " ;
    }
    cout<<endl;
}

};
int main(){
    ll t=1;
    //cin >> t;
    
    while (t--){ 
        Solution* s = new Solution(); 
        s->solve();
        delete s; 

        }
    return 0;
}