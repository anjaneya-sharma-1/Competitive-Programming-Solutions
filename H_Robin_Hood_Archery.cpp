#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007

// splitmix64 for fast 64‑bit hashing
static uint64_t splitmix64(uint64_t x) {
    x += 0x9e3779b97f4a7c15;
    x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
    x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
    return x ^ (x >> 31);
}

class Solution{
public:
    void solve() {
        int n, q;
        cin >> n >> q;
        vector<int> a(n+1);
        for(int i = 1; i <= n; i++){
            cin >> a[i];
        }


        vector<int> comp(a.begin()+1, a.end());
        sort(comp.begin(), comp.end());
        comp.erase(unique(comp.begin(), comp.end()), comp.end());
        int M = comp.size();


        static mt19937_64 rng(chrono::high_resolution_clock::now().time_since_epoch().count());
        vector<uint64_t> Hval(M);
        for(int i = 0; i < M; i++){
            Hval[i] = splitmix64(rng());
        }

    
        vector<uint64_t> H(n+1, 0);
        for(int i = 1; i <= n; i++){
            int idx = int(lower_bound(comp.begin(), comp.end(), a[i]) - comp.begin());
            H[i] = H[i-1] ^ Hval[idx];
        }

      
        while(q--){
            int l, r;
            cin >> l >> r;
            uint64_t xr = H[r] ^ H[l-1];
            cout << (xr == 0 ? "YES\n" : "NO\n");
        }
    }
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;
    while (t--){ 
        Solution* s = new Solution();
        s->solve();
        delete s;
    }
    return 0;
}
