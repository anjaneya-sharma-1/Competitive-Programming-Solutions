#include <bits/stdc++.h>
 
using namespace std;
 
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
 
typedef __gnu_pbds::tree<int, __gnu_pbds::null_type, less<int>, __gnu_pbds::rb_tree_tag, __gnu_pbds::tree_order_statistics_node_update> ordered_set;
#define ll long long
#define N 1000000
#define MOD 1000000007

class Solution{
    public:
void solve() {
    ll n;
    cin>>n;
    map<ll,ll> m;
    vector<ll>v;
    vector<pair<int,int>>v2;
    for(int i=0;i<n;i++){
        int l,r;
        cin>>l>>r;
        v2.push_back({l,r});
    }
   ll ans=0;
    sort(v2.begin(),v2.end());
    ordered_set st;
    st.clear();
    for(int i=0;i<n;i++){
        st.insert(v2[i].second);
        ans+=i;
        ans-=st.order_of_key(v2[i].second);
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