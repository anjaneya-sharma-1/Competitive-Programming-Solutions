#include <bits/stdc++.h>
using namespace std;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

typedef __gnu_pbds::tree<int, __gnu_pbds::null_type, less<int>, __gnu_pbds::rb_tree_tag, __gnu_pbds::tree_order_statistics_node_update> ordered_set;
#define ll long long
#define MOD 1000000007

class Solution {
public:
    void solve() {
        ll n, q;
        ordered_set row, col;
        map<ll, ll> rowm, colm;
        cin >> n >> q;

        while (q--) {
            ll t;
            cin >> t;
            if (t == 1) { 
                ll x, y;
                cin >> x >> y;
                if(row.find(x) == row.end() ) {
                    row.insert(x);
                }
                if(col.find(y) == col.end() )col.insert(y);
                rowm[x]++;
                colm[y]++;
            } 
            else if (t == 2) {
                ll x, y;
                cin >> x >> y;
                rowm[x]--;
                colm[y]--;
                if(rowm[x] == 0) row.erase(x);
                if(colm[y] == 0) col.erase(y);
              
            } 
            else if (t == 3) {
                ll x1, y1, x2, y2;
                cin >> x1 >> y1 >> x2 >> y2;

                bool row_filled = (row.order_of_key(x2 + 1) - row.order_of_key(x1) == (x2 - x1 + 1));
                bool col_filled = (col.order_of_key(y2 + 1) - col.order_of_key(y1) == (y2 - y1 + 1));

                if (row_filled || col_filled) {
                    cout << "Yes\n";
                } else {
                    cout << "No\n";
                }
            }
        }
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    Solution s;
    s.solve();

    return 0;
}
