#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007

void solve() {
    ll n, m, k;
    cin >> n >> m >> k;
    

    if (k % 2 != 0) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) cout << "-1 ";
            cout << endl;
        }
        return;
    }

    k /= 2;  
    vector<vector<ll>> r(n + 1, vector<ll>(m, 0));
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j < m; j++) cin >> r[i][j];
    }


    vector<vector<ll>> c(n, vector<ll>(m + 1, 0));
    for (int i = 1; i < n; i++) {
        for (int j = 1; j <= m; j++) cin >> c[i][j];
    }

    
    vector<vector<ll>> dp(n + 1, vector<ll>(m + 1, LLONG_MAX));
    vector<vector<ll>> prev(n + 1, vector<ll>(m + 1, 0));

   
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            prev[i][j] = 0;

 
    for (int t = 1; t <= k; t++) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                dp[i][j] = LLONG_MAX;

                if (i > 1) dp[i][j] = min(dp[i][j], prev[i - 1][j] + c[i - 1][j]);  
                if (i < n) dp[i][j] = min(dp[i][j], prev[i + 1][j] + c[i][j]);     
                if (j > 1) dp[i][j] = min(dp[i][j], prev[i][j - 1] + r[i][j - 1]);  
                if (j < m) dp[i][j] = min(dp[i][j], prev[i][j + 1] + r[i][j]);      
            }
        }
        swap(dp, prev);  
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) cout << 2 * prev[i][j] << " ";
        cout << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();
    
    return 0;
}
