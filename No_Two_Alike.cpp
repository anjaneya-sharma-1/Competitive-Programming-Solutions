#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution
{
public:
    void solve()
    {
        ll n;
        cin >> n;
        vector<ll> arr(n);
        unordered_map<ll, ll> mp;
        unordered_map<ll, ll> mp2;
        set<ll> s;
        ll ans = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (mp.find(arr[i]) == mp.end())
            {
                mp[arr[i]] = i;
            }
            mp2[arr[i]] = i;
            s.insert(arr[i]);
        }
        vector<vector<ll>> intervals;
        for (auto it : s)
        {
            ll start = mp[it];
            ll end = mp2[it];
            if (start == end)
            {
                continue;
            }
            intervals.push_back({start, end});
        }
        sort(intervals.begin(), intervals.end());
        vector<vector<ll>> res;
        int i = 0;
        int m = intervals.size();
        while (i < m)
        {
            ll l = intervals[i][0];
            ll r = intervals[i][1];
            ll j = i + 1;
            while (j < m && intervals[j][0] <= r)
            {
                r = max(intervals[j][1], r);
                j++;
            }
            i = j;
            res.push_back({l, r});
        }

        unordered_map<ll, ll> vis;
        for (auto it : res)
        {
            for (int j = it[0]; j <= it[1]; j++)
            {
                if (vis[arr[j]] == 0)
                {
                    ans++;
                    vis[arr[j]]++;
                }
                vis[arr[j]]++;
            }
        }
        cout << ans << endl;
    }
};
int main()
{
    ll t;
    cin >> t;

    while (t--)
    {
        Solution *s = new Solution();
        s->solve();
        delete s;
    }
    return 0;
}