#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007


class Solution {
public:
    void solve() {
        ll n, m;
        cin >> n >> m;
        vector<string> grid(n);
        pair<ll,ll> start, end;
        
        // Read input
        for(int i = 0; i < n; i++) {
            cin >> grid[i];
            for(int j = 0; j < m; j++) {
                if(grid[i][j] == 'S') start = {i,j};
                if(grid[i][j] == 'T') end = {i,j};
            }
        }

        
        set<vector<ll>> visited;
     
        queue<pair<ll, vector<ll>>> q;
        
        
        q.push({0, {start.first, start.second, -1, 0}});
        
        vector<pair<ll,ll>> dirs = {{-1,0}, {1,0}, {0,-1}, {0,1}}; // up, down, left, right
        
        while(!q.empty()) {
            auto [dist, state] = q.front();
            q.pop();
            
            ll x = state[0], y = state[1];
            ll last_dir = state[2];
            ll consec = state[3];
            
            if(x == end.first && y == end.second) {
                cout << dist << endl;
                return;
            }
            
            for(ll dir = 0; dir < 4; dir++) {
                ll nx = x + dirs[dir].first;
                ll ny = y + dirs[dir].second;
                
                if(nx < 0 || nx >= n || ny < 0 || ny >= m || grid[nx][ny] == '#') 
                    continue;
                
                ll new_consec = (dir == last_dir) ? consec + 1 : 1;
                
                if(new_consec > 3) continue;
                
                vector<ll> new_state = {nx, ny, dir, new_consec};
                if(visited.count(new_state)) continue;
                
                visited.insert(new_state);
                q.push({dist + 1, new_state});
            }
        }
        
        cout << -1 << endl;
    }
};
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    ll t=1;
    
    
    while (t--){ 
        Solution* s = new Solution(); 
        s->solve();
        delete s; 

        }
    return 0;
}