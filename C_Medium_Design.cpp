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
        ll n, m;
        cin >> n >> m;
        map<ll, ll> v1;
        map<ll, ll> v2;
        set<ll> s;
        for (ll i = 0; i < n; i++)
        {
            ll a, b;
            cin >> a >> b;
            if (a > b)
            {
                swap(a, b);
            }
            if (a == 1 && b == m)
            {
                continue;
            }
            if (a == 1)
            {
                v2[a]++;
                v2[b + 1]--;
            }
            else if (b == m)
            {
                v1[a]++;
                v1[b + 1]--;
            }
            else
            {
                v1[a]++;
                v1[b + 1]--;
                v2[a]++;
                v2[b + 1]--;
            }
            s.insert(a);
            s.insert(b+1);
        }
        ll maxi1 = 0;
        ll maxi2 = 0;
        ll curr1 = 0;
        ll curr2 = 0;
        for (auto a : s)
        {
            //cout<<curr1<<a<<" ";
            if (v1.find(a) == v1.end())
            {
                curr1 += 0;
            }
            else
            {
                curr1 += v1[a];
            }
            if (v1.find(a) == v1.end())
            {
                curr2 += v2[a];
            }
            else
            {
                curr2 += v2[a];
            }

            maxi1 = max(curr1, maxi1);
            maxi2 = max(curr2, maxi2);
        }
        cout << max(maxi1, maxi2) << endl;
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