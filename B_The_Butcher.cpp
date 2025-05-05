#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution {
public:
    void solve() {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        ll n;
        cin >> n;
        vector<pair<ll, ll>> vec(n);
        for (int i = 0; i < n; i++) {
            cin >> vec[i].first >> vec[i].second;
        }

        auto solve_one = [&](vector<pair<ll, ll>>& vec) {
            set<pair<ll, int>> widest, longest;
            int sz = vec.size();
            for (int i = 0; i < sz; i++) {
                widest.insert({vec[i].first, i});
                longest.insert({vec[i].second, i});
            }
            map<int, pair<ll, ll>> blocks;
            for (int i = 0; i < sz; i++) blocks[i] = vec[i];

            pair<ll, ll> ans = {-1, -1};
            bool mode = 0;
            ll prevw = LLONG_MAX, prevh = LLONG_MAX, prv = -1;
            bool cringe = false;
            while (!widest.empty()) {
                if (!mode) {
                    ll cur = widest.rbegin()->first, sum = 0;
                    if (ans.second == -1) ans.second = cur;
                    prv = blocks[widest.rbegin()->second].second;
                    while (!widest.empty() && widest.rbegin()->first == cur) {
                        auto it = prev(widest.end());
                        int idx = it->second;
                        longest.erase({blocks[idx].second, idx});
                        sum += blocks[idx].second;
                        widest.erase(it);
                    }
                    if (!cringe) ans.first = sum;
                    prv = sum;
                    if (prevw == LLONG_MAX) prevh = cur;
                    else {
                        prevw -= sum;
                        if (prevh != cur) return make_pair(-1LL, -1LL);
                    }
                } else {
                    ll cur = longest.rbegin()->first, sum = 0;
                    if (!cringe) {
                        ans.first = cur + prv;
                        cringe = true;
                    }
                    while (!longest.empty() && longest.rbegin()->first == cur) {
                        auto it = prev(longest.end());
                        int idx = it->second;
                        widest.erase({blocks[idx].first, idx});
                        sum += blocks[idx].first;
                        longest.erase(it);
                    }
                    if (prevw == LLONG_MAX) {
                        prevw = cur;
                        prevh -= sum;
                        if (prevw != cur) return make_pair(-1LL, -1LL);
                    } else {
                        prevh -= sum;
                        if (prevw != cur) return make_pair(-1LL, -1LL);
                    }
                }
                mode = !mode;
            }
            if (prevh == 0 || prevw == 0 || prevh == LLONG_MAX || prevw == LLONG_MAX)
                return ans;
            else
                return make_pair(-1LL, -1LL);
        };

        vector<pair<ll, ll>> ans;
        auto a = vec;
        auto res1 = solve_one(a);
        if (res1.first != -1) {
            ans.push_back({res1.second, res1.first});
        }
        for (auto &p : vec) swap(p.first, p.second);
        auto res2 = solve_one(vec);
        if (res2.first != -1) ans.push_back(res2);
        if (ans.size() == 2 && ans[0] == ans[1]) ans.pop_back();

        cout << ans.size() << '\n';
        for (auto &p : ans) cout << p.first << ' ' << p.second << '\n';
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        Solution sol;
        sol.solve();
    }
    return 0;
}
