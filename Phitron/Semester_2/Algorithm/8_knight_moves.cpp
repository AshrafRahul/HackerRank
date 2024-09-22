#include <bits/stdc++.h>
using namespace std;

const int MAX = 105;
vector<pair<int, int>> directions = {{2, 1}, {2, -1}, {-2, 1}, {-2, -1}, {1, 2}, {1, -2}, {-1, 2}, {-1, -2}};

int bfs(int N, int M, int ki, int kj, int qi, int qj) {
    if (ki == qi && kj == qj) return 0;

    vector<vector<int>> dist(N, vector<int>(M, -1));
    queue<pair<int, int>> q;
    q.push({ki, kj});
    dist[ki][kj] = 0;

    while (!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        for (auto dir : directions) {
            int nx = x + dir.first;
            int ny = y + dir.second;

            if (nx >= 0 && ny >= 0 && nx < N && ny < M && dist[nx][ny] == -1) {
                dist[nx][ny] = dist[x][y] + 1;
                q.push({nx, ny});

                if (nx == qi && ny == qj) {
                    return dist[nx][ny];
                }
            }
        }
    }
    return -1;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, M;
        cin >> N >> M;

        int ki, kj;
        cin >> ki >> kj;

        int qi, qj; 
        cin >> qi >> qj;

        int result = bfs(N, M, ki, kj, qi, qj);
        
        cout << result << "\n";
    }

    return 0;
}
