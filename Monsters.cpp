#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 1000000007

struct Cell {
    int x, y;
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, m;
    cin >> n >> m;
    vector<string> grid(n);
    for(auto &s : grid)
        cin >> s;
    

    vector<vector<int>> monsterDist(n, vector<int>(m, INT_MAX));
    queue<Cell> mq;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(grid[i][j] == 'M'){
                mq.push({i, j});
                monsterDist[i][j] = 0;
            }
        }
    }
    
    vector<int> dx = {0, 1, 0, -1};
    vector<int> dy = {1, 0, -1, 0};
    while(!mq.empty()){
        Cell cur = mq.front();
        mq.pop();
        for(int k = 0; k < 4; k++){
            int nx = cur.x + dx[k], ny = cur.y + dy[k];
            if(nx >= 0 && nx < n && ny >= 0 && ny < m && grid[nx][ny] != '#' && monsterDist[nx][ny] > monsterDist[cur.x][cur.y] + 1){
                monsterDist[nx][ny] = monsterDist[cur.x][cur.y] + 1;
                mq.push({nx, ny});
            }
        }
    }
    

    vector<vector<int>> heroDist(n, vector<int>(m, INT_MAX));
    vector<vector<pair<int, int>>> parent(n, vector<pair<int, int>>(m, {-1,-1}));
    vector<vector<char>> moveMade(n, vector<char>(m, ' '));
    queue<Cell> hq;
    int startX, startY;
    bool foundStart = false;
    for (int i = 0; i < n && !foundStart; i++){
        for (int j = 0; j < m && !foundStart; j++){
            if(grid[i][j] == 'A'){
                startX = i;
                startY = j;
                heroDist[i][j] = 0;
                hq.push({i, j});
                foundStart = true;
            }
        }
    }
    
    auto isBoundary = [&](int x, int y) {
        return (x == 0 || x == n-1 || y == 0 || y == m-1);
    };
    
    bool escaped = false;
    int exitX, exitY;
    while(!hq.empty()){
        Cell cur = hq.front();
        hq.pop();
        
        if(isBoundary(cur.x, cur.y)){
            escaped = true;
            exitX = cur.x;
            exitY = cur.y;
            break;
        }
        for(int k = 0; k < 4; k++){
            int nx = cur.x + dx[k], ny = cur.y + dy[k];
            if(nx >= 0 && nx < n && ny >= 0 && ny < m && grid[nx][ny] != '#' && heroDist[nx][ny] > heroDist[cur.x][cur.y] + 1){
           
                if(heroDist[cur.x][cur.y] + 1 < monsterDist[nx][ny]){
                    heroDist[nx][ny] = heroDist[cur.x][cur.y] + 1;
                    parent[nx][ny] = {cur.x, cur.y};
                  
                    char moveChar;
                    if(k == 0) moveChar = 'R';
                    else if(k == 1) moveChar = 'D';
                    else if(k == 2) moveChar = 'L';
                    else moveChar = 'U';
                    moveMade[nx][ny] = moveChar;
                    hq.push({nx, ny});
                }
            }
        }
    }
    
    if(escaped){
        string path = "";
        int x = exitX, y = exitY;
        while(!(x == startX && y == startY)){
            char c = moveMade[x][y];
            path.push_back(c);
            auto p = parent[x][y];
            x = p.first;
            y = p.second;
        }
        reverse(path.begin(), path.end());
        cout << "YES\n" << path.size() << "\n" << path << "\n";
    } else {
        cout << "NO\n";
    }
    
    return 0;
}
