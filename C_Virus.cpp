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
        int n, m;
        std::cin >> n >> m;

        std::vector<int> a(m);
        for (int i = 0; i < m; i++)
        {
            std::cin >> a[i];
           
        }
        sort(a.begin(), a.end());
        vector<int> b;
        for (int i = 0; i < m - 1; i++)
        {
            b.push_back(a[i + 1] - a[i] - 1);

        }
        b.push_back(a[0] + n - a[m - 1] - 1);
        
        std::sort(b.begin(), b.end(), std::greater());
        int ans = 0, curr = 0;
        for(int i =0;i<m;i++){

            if(b[i]-2*curr -1 <0){
                break;
            }
            else{
                if(b[i]-2*curr==1){
                    ans+=1;
                    curr+=2;
                    continue;
                }
                ans+=b[i]-2*curr-1;
                curr+=2;
                }
        }
        cout<<n-ans<<endl;
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