#include<bits/stdc++.h>
using namespace std;

const int N = 1005;
char ch[N][N];
bool vis[N][N];
int n, m;

vector<pair<int, int>> d = {{0,1}, {0,-1}, {-1,0}, {1,0}};

bool dfs (int i, int j, int di, int dj) {
    if(i<0 || i>=n || j<0 || j>=m || ch[i][j]=='-') return false;
    if(vis[i][j]) return false;
    vis[i][j] = true;
    if(i==di && j==dj) return true;

    for(auto& dir: d) {
        int ni = i+dir.first;
        int nj = j+dir.second;
        if(dfs(ni, nj, di, dj)) return true;
    }
    return false;
}

int main() {
    cin >> n >> m;

    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cin >> ch[i][j];
        }
    }

    int si, sj, di, dj;
    cin >> si >> sj >> di >> dj;

    memset(vis, false, sizeof(vis));

    if(dfs(si, sj, di, dj)) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}
