#include <bits/stdc++.h>
using namespace std;

const int N = 1005;
char grid[N][N];
bool vis[N][N];
vector<pair<int, int>> directions = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
int n, m;           

bool valid(int x, int y) {
    return (x >= 0 && x < n && y >= 0 && y < m && grid[x][y] != '#' && !vis[x][y]);
}

bool bfs(int startX, int startY, int destX, int destY) {
    queue<pair<int, int>> q;
    q.push({startX, startY});
    vis[startX][startY] = true;
    
    while (!q.empty()) {
        pair<int, int> current = q.front();
        q.pop();
        
        int x = current.first;
        int y = current.second;
        
        if (x == destX && y == destY) {
            return true;
        }
        
        for (auto dir : directions) {
            int newX = x + dir.first;
            int newY = y + dir.second;
            
            if (valid(newX, newY)) {
                vis[newX][newY] = true;
                q.push({newX, newY});
            }
        }
    }
    
    return false;
}

int main() {
    cin >> n >> m;
    int startX, startY, destX, destY;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> grid[i][j];
            if (grid[i][j] == 'A') {
                startX = i;
                startY = j;
            }
            if (grid[i][j] == 'B') {
                destX = i;
                destY = j;
            }
        }
    }

    memset(vis, false, sizeof(vis));
    
    if (bfs(startX, startY, destX, destY)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}
