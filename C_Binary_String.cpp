#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution {
public:
    bool can(vector<ll>& pos, ll m) {
        ll k = pos.size();
        ll x = k - m;
        for (ll i = 0; i <= m; i++) {
            ll l = pos[i];
            ll r = pos[i + x - 1];
            if (r - l + 1 - x <= m) {
                return true;
            }
        }
        return false;
    }

    void solve() {
        string s;
        cin >> s;
        vector<ll> pos;
        ll n = s.length();
        
       
        for (ll i = 0; i < n; i++) {
            if (s[i] == '1') {
                pos.push_back(i);
            }
        }


        if (pos.empty() || pos.back() - pos[0] == pos.size() - 1) {
            cout << 0 << endl;
            return;
        }

        ll lf = 0;
        ll rg = pos.size();
        
  
        while (rg - lf > 1) {
            ll mid = (lf + rg) / 2;
            if (can(pos, mid)) {
                rg = mid;
            } else {
                lf = mid;
            }
        }
        
        cout << rg << endl;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll t;
    cin >> t;
    while (t--) {
        Solution* s = new Solution();
        s->solve();
        delete s;
    }
    return 0;
}