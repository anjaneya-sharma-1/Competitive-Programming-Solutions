#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007

class Solution
{
public:
    bool palindrome(string &s)
    {
        int n = s.size();
        for (int i = 0; i < n / 2; i++)
        {
            if (s[i] != s[n - i - 1])
            {
                return false;
            }
        }
        return true;
    }
    int check(char x, string &a)
    {
        int n = a.size();
        int ans=0;
        string b = "";
        vector<int> ind(n, 0);
        int l=0;
        int r=n-1;
        while (l < r)
        {
            if (a[l] != x&&a[r]!=x)
            {
                ind[l] = 1;
                ind[r] = 1;
                r--;
                l++;
            }
            else if (a[r] != x&&a[l]==x)
            {
                ind[r] = 1;
                l++;
                ans++;
            }
            else if (a[l] != x&&a[r]==x)
            {
                ind[l] = 1;
                r--;
                ans++;
            }
            else if(a[l]==x&&a[r]==x){
                ind[l]=1;
                ind[r]=1;
                l++;
                r--;
            }
            
            
        }
        for (int i = 0; i < n; i++)
        {
            if (ind[i] == 1)
            {
                b += a[i];
            }
        }
        
        int m = b.size();
        if (palindrome(b))
        {
            return ans;
        };
        return -1;
    }
    void solve()
    {
        ll n;
        cin >> n;
        string s;
        cin >> s;
        int i = 0;
        int j = n - 1;
        if (palindrome(s))
        {
            cout << 0 << endl;
            return;
        }
        while (i < j)
        {
            if (s[i] != s[j])
            {
                int a =check(s[i], s) ;
                int b= check(s[j], s);
                if(a!=-1||b!=-1){
                    if(a==-1){
                        cout << b<< endl;
                    }
                    else if(b==-1){
                        cout << a<< endl;
                    }
                    else{
                        cout << min(a,b)<< endl;
                    }
                    
                    return;
                }
                else
                {
                    cout << -1 << endl;
                    return;
                }
            }
            i++;
            j--;
        }
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