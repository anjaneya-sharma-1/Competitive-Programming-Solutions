#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
void solve() {
    
     int n, m;
    std::cin >> n >> m;
    
    std::priority_queue<int> a, b;
    for (int i = 0; i < n; i++) {
        int x;
        std::cin >> x;
        a.push(x);
    }
    for (int i = 0; i < m; i++) {
        int x;
        std::cin >> x;
        b.push(x);
    }
    
    while (!a.empty()) {
        if (b.empty() || b.size() > a.size()) {
            std::cout << "No\n";
            return;
        }
        int x = b.top();
        b.pop();
        
        if (x < a.top()) {
            std::cout << "No\n";
            return;
        }
        if (x == a.top()) {
            a.pop();
        } else {
            b.push(x / 2);
            b.push((x + 1) / 2);
        }
    }
    
    if (!b.empty()) {
        std::cout << "No\n";
        return;
    }
    
    std::cout << "Yes\n";
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