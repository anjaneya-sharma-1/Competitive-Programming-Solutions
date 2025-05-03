#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007

class Solution {
public:
    void solve() {
        int n; cin >> n;
    vector<int> a(n);
    for(int &x : a) {
      cin >> x;
      x--;
    }

    vector l(n + 1, INT_MAX);
    for(int i = 0; i < n; i++)
      l[a[i]] = i;

    priority_queue<int, vector<int>, greater<int>> ls(l.begin(), l.end());
    priority_queue<array<int, 2>, vector<array<int, 2>>, greater<array<int, 2>>> mx_cand, mn_cand;
    vector<bool> used(n, false);

    for(int i = 0; i <= ls.top(); i++) {
      mx_cand.push({-a[i], i});
      mn_cand.push({a[i], i});
    }

    vector<int> b;
    int i = 0;
    while(!mn_cand.empty()) {
      auto [x, pos] = (b.size() % 2 == 0 ? mx_cand.top() : mn_cand.top());
      if (b.size() % 2 == 0) {
        mx_cand.pop();
        x *= -1;
      } else {
        mn_cand.pop();
      }
      b.emplace_back(x);
      i = pos + 1, used[x] = true;
      while(ls.top() != INT_MAX and used[a[ls.top()]]) {
        int j = ls.top(); ls.pop();
        for(int k = j + 1; k <= min(ls.top(), n - 1); k++) {
          mx_cand.push({-a[k], k});
          mn_cand.push({a[k], k});
        }
      }
      while(!mx_cand.empty() and (used[-mx_cand.top()[0]] or mx_cand.top()[1] < i)) mx_cand.pop();
      while(!mn_cand.empty() and (used[mn_cand.top()[0]] or mn_cand.top()[1] < i)) mn_cand.pop();
    }

    cout << b.size() << '\n';
    for(int i = 0; i < b.size(); i++)
      cout << b[i] + 1 << " \n"[i + 1 == b.size()];
  }
};

int main(){
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
