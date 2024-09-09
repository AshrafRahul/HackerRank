#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<string> v;
bool vis[1005][1005]; 
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};

bool isValid(int i, int j) {
    if (i < 0 || i >= n || j < 0 || j >= m) return false; 
    if (v[i][j] == '#' || vis[i][j]) return false;  
    return true;
}

void dfs(int i, int j) {
    vis[i][j] = true;
    for (auto dir : d) {
        int ni = i + dir.first;
        int nj = j + dir.second; 
        if (isValid(ni, nj)) {
            dfs(ni, nj); 
        }
    }
}

int main() {
    cin >> n >> m;
    v.resize(n); 
    
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    memset(vis, false, sizeof(vis));
    
    int apartments = 0;  
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (v[i][j] == '.' && !vis[i][j]) {
                dfs(i, j); 
                apartments++;
            }
        }
    }
    
    cout << apartments << endl;
    
    return 0;
}
