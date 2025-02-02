#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
void solve() {
    int n,m;
    cin>>n>>m;
    vector<int>a(n);
    for (int i = 0; i < n; i++) {
        string s;
        cin>>s;
        a[i] = s.size();
    }

    int i = 0;
    while (i < n && a[i] <= m) {
        m -= a[i];
        i++;
    }
    
    cout << i <<endl;

    
}

};
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    ll t;
    cin >> t;
    
    
    while (t--){ 
        Solution* s = new Solution(); 
        s->solve();
        delete s; 

        }
    return 0;
}