#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<string> v;
bool vis[1005][1005];
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};

bool isValid(int i, int j) {
    return (i >= 0 && i < n && j >= 0 && j < m && v[i][j] == '.' && !vis[i][j]);
}

int dfs(int si, int sj) {
    stack<pair<int, int>> s;
    s.push({si, sj});
    vis[si][sj] = true;
    int room_count = 0;

    while (!s.empty()) {
        pair<int, int> current = s.top();
        s.pop();
        room_count++;

        for (auto dir : d) {
            int ni = current.first + dir.first;
            int nj = current.second + dir.second;
            if (isValid(ni, nj)) {
                s.push({ni, nj});
                vis[ni][nj] = true;
            }
        }
    }

    return room_count;
}

int main() {
    cin >> n >> m;
    v.resize(n);
    
    for (int i = 0; i < n; i++) {
        cin >> v[i]; 
    }

    memset(vis, false, sizeof(vis));
    vector<int> apartment_sizes;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (v[i][j] == '.' && !vis[i][j]) {
                int apartment_size = dfs(i, j);
                apartment_sizes.push_back(apartment_size);
            }
        }
    }

    sort(apartment_sizes.begin(), apartment_sizes.end());

    for (int size : apartment_sizes) {
        cout << size << " ";
    }

    if (apartment_sizes.empty()) {
        cout << 0;
    }

    return 0;
}
