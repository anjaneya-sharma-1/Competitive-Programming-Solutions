#include <bits/stdc++.h>
 
using namespace std;
 
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
 
typedef __gnu_pbds::tree<int, __gnu_pbds::null_type, less_equal<int>, __gnu_pbds::rb_tree_tag, __gnu_pbds::tree_order_statistics_node_update> ordered_set;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
void solve() {
    ll n;
        cin >> n;
       stack<ll> s;
       vector<ll>dp(n,0);
        vector<ll> v(n);
        ll ans = 0;
        for(ll i = 0; i < n; i++) {
            cin >> v[i];
        }
        ordered_set st;
        st.clear();
        for(ll i=n-1;i>=0;i--){
            ans+=st.order_of_key(v[i]+1);
            st.insert(v[i]);
        }
        cout << ans << endl;
    
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