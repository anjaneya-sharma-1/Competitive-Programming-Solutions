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
        string w;
        getline(cin, w);
        vector<vector<ll>> matrix(n, vector<ll>(m));
        for (ll i = 0; i < n; i++)
        {
            string s;
            getline(cin, s);
            for (ll j = 0; j < m; j++)
            {
                matrix[i][j] = (s[j] - '0');
            }
        }

        ll left = 0, right = m - 1, top = 0, bottom = n - 1;
        vector<vector<ll>> m2(n, vector<ll>(m,0));
        vector<ll> pq = {1, 5, 4, 3};
        ll count = 0;
        while (left <= right && top <= bottom)
        {
            
            vector<ll> q;
            for (ll i = 0; i <= 1; i++)
            {
                for (ll i = left; i <= right; i++)
                {

                    q.push_back(matrix[top][i]);

                    if (q.size() > 4)
                    {
                        q.erase(q.begin());
                    }
                    if (q == pq && m2[top][i] == 0)
                    {
                        m2[top][i]++;
                        count++;
                    }
                }

                for (ll i = top + 1; i <= bottom; i++)
                {

                    q.push_back(matrix[i][right]);
                    if (q.size() > 4)
                    {
                        q.erase(q.begin());
                    }
                    if (q == pq && m2[i][right] == 0)
                    {
                        m2[i][right]++;

                        count++;
                    }
                }

                if (top + 1 <= bottom)
                {

                    for (ll i = right - 1; i >= left; i--)
                    {
                        q.push_back(matrix[bottom][i]);
                        if (q.size() > 4)
                        {
                            q.erase(q.begin());
                        }
                        if (q == pq && m2[bottom][i] == 0)
                        {
                            m2[bottom][i]++;
                            count++;
                        }
                    }
                }

                if (left <= right - 1)
                {

                    for (ll i = bottom - 1; i >= top + 1; i--)
                    {
                        q.push_back(matrix[i][left]);
                        if (q.size() > 4)
                        {
                            q.erase(q.begin());
                        }
                        if (q == pq && m2[i][left] == 0)
                        {
                            m2[i][left]++;
                            count++;
                        }
                    }
                }
            }

            top++;
            right--;
            bottom--;
            left++;
        }

        cout << count << endl;
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