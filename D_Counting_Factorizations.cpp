#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll MOD = 998244353;
const int MAXN = 5050;

ll fast_pow(ll b, ll e){
    ll res = 1;
    while(e > 0){
        if(e % 2 == 1){
            res = res * b % MOD;
        }
        b = b * b % MOD;
        e /= 2;
    }
    return res;
}

bool is_prime(ll n){
    if(n == 1) return false;
    for(ll i = 2; i * i <= n; i++){
        if(n % i == 0) return false;
    }
    return true;
}

vector<pair<ll, ll>> primes;
ll dp[MAXN][MAXN];
ll fact[MAXN], fact_inv[MAXN];

ll f(ll x, ll y){
    ll &res = dp[x][y];
    if(res >= 0){
        return res;
    }
    if(x == (int)primes.size()){
        return res = (y == 0);
    }
    res = fact_inv[primes[x].second] * f(x + 1, y) % MOD;
    if(y > 0){
        res = (res + fact_inv[primes[x].second - 1] * f(x + 1, y - 1)) % MOD;    
    }
    return res;
}

class Solution {
public:
    void solve() {
        int n; 
        cin >> n;
        vector<ll> a(2 * n);
        for(int i = 0; i < 2 * n; i++){
            cin >> a[i];
        }
        sort(a.begin(), a.end());

        vector<pair<ll, ll>> a_comp;
        for(int i = 0; i < 2 * n; i++){
            if(a_comp.empty() || a_comp.back().first != a[i]){
                a_comp.push_back({a[i], 1});
            }else{
                a_comp.back().second++;
            }
        }

        fact[0] = fact_inv[0] = 1;
        for(ll i = 1; i < MAXN; i++){
            fact[i] = fact[i-1] * i % MOD;
            fact_inv[i] = fast_pow(fact[i], MOD - 2);
        }

        primes.clear();
        for(auto i : a_comp){
            if(is_prime(i.first)){
                primes.push_back(i);
            }
        }

        memset(dp, -1, sizeof(dp));
        ll res = f(0, n);

        for(auto i : a_comp){
            if(!is_prime(i.first)){
                res = res * fact_inv[i.second] % MOD;
            }
        }
        res = res * fact[n] % MOD;
        cout << res << "\n";
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    while (t--) {
        Solution sol;
        sol.solve();
    }
    return 0;
}