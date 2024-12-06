#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution
{
public:
    ll msb(ll n ){
        ll m =0;
        while(n!=0){
            n>>=1;
            m++;
        }
        return 1<<m;
    }
    void solve()
    {

        ll n;
        cin >> n;
        if(n==6){
            cout<<7<<endl;
            cout<<"1 2 4 6 5 3"<<endl;
            return;
        }
        
        ll k = 0;
        if (n % 2 == 0)
        {
            
                ll m =msb(n)/2;

                cout << (m| (m - 1)) << endl;
                for (ll i = 2; i <= n; i++)
                {
                    if(i!=m&&i!=m-1&&i!=m-2){
                        cout << i << " ";
                    }
                    
                }
                cout << 1 << " ";
                cout<<m-2<<" ";
                cout << m - 1 << " ";
            cout << m << endl;

            
        }
        else
        {

            cout << n << endl;
            for (ll i = 2; i <= n - 2; i++)
            {
                cout << i << " ";
            }
            cout << 1 << " ";
            cout << n - 1 << " ";
            cout << n << endl;
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