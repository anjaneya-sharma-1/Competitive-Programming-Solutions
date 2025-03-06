#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

typedef __gnu_pbds::tree<int, __gnu_pbds::null_type, less<int>, __gnu_pbds::rb_tree_tag, __gnu_pbds::tree_order_statistics_node_update> ordered_set;

class Solution {
public:
    void solve() {
        ll n;
        cin >> n;
        vector<ll> a(n), b(n);
        map<ll, ll> mp; 
        map<ll, ll> mp1;

        for (ll i = 0; i < n; i++) {
            cin >> a[i];
            mp[a[i]]++;
            mp1[a[i]] = i; 
        }

        ll failed=0;
        for (ll i = 0; i < n; i++) {
            cin >> b[i];
            mp[b[i]]--;
            if (mp[b[i]] < 0&&!failed) {
                failed=1;
                cout << "NO\n";

            }
        }
        if(failed){
            return;
        }
       
        map<ll, ll> indexMap; 
        for (ll i = 0; i < n; i++) {
            indexMap[a[i]] = i; 
        }

        vector<bool> visited(n, false);
        ll tot = 0;

        for (ll i = 0; i < n; i++) {
            if (visited[i] || indexMap[b[i]] == i) continue; 

            ll cycleSize = 0;
            ll j = i;
            while (!visited[j]) {
                visited[j] = true;
                j = indexMap[b[j]]; 
                cycleSize++;
            }

            if (cycleSize > 1) tot += (cycleSize - 1);
            
        }
        //cout<<tot;
        if(tot%2==0){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
};

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    ll t;
    cin >> t;

    while (t--) {
        Solution* s = new Solution();
        s->solve();
        delete s;
    }

    return 0;
}
