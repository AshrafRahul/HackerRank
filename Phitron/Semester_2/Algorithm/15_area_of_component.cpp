#include <bits/stdc++.h>
using namespace std;

const int N = 1e3+5;
char grid[N][N];
bool vis[N][N];
vector<pair<int, int>> directions = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
int n, m;

bool isValid(int x, int y) {
    return (x >= 0 && x < n && y >= 0 && y < m && grid[x][y] == '.' && !vis[x][y]);
}

int dfs(int x, int y) {
    vis[x][y] = true;
    int area = 1;
    for (auto dir : directions) {
        int newX = x + dir.first;
        int newY = y + dir.second;
        if (isValid(newX, newY)) {
            area += dfs(newX, newY);
        }
    }
    return area;
}

int main() {
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> grid[i][j];
        }
    }

    memset(vis, false, sizeof(vis));
    int minArea = INT_MAX;
    bool hasComponent = false;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (grid[i][j] == '.' && !vis[i][j]) {
                hasComponent = true;
                int area = dfs(i, j);
                minArea = min(minArea, area);
            }
        }
    }

    if (hasComponent) {
        cout << minArea << endl;
    } else {
        cout << -1 << endl;
    }

    return 0;
}
