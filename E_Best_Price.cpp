#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 1000000007

class Solution
{
public:
    

    void solve()
    {
        ll n, k;
        cin >> n >> k;
        vector<ll> v(n), u(n);
        ll maxi = 0;

        for (int i = 0; i < n; i++)
            cin >> v[i];
        for (int i = 0; i < n; i++)
        {
            cin >> u[i];
            maxi = max(maxi, u[i]);
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
