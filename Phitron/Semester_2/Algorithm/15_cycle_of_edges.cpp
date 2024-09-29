#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
int parent[N];
int group_size[N];

void dsu_initialize(int n) {
    for (int i=1; i<=n; i++) {
        parent[i] = -1;
        group_size[i] = 1;
    }
}

int dsu_find(int node) {
    if (parent[node] == -1)
        return node;
    return parent[node] = dsu_find(parent[node]);
}

void dsu_union_by_size(int node1, int node2) {
    int leaderA = dsu_find(node1);
    int leaderB = dsu_find(node2);
    
    if (leaderA != leaderB) {
        if (group_size[leaderA] > group_size[leaderB]) {
            parent[leaderB] = leaderA;
            group_size[leaderA] += group_size[leaderB];
        } else {
            parent[leaderA] = leaderB;
            group_size[leaderB] += group_size[leaderA];
        }
    }
}

int main() {
    int n, e;
    cin >> n >> e;

    dsu_initialize(n);

    int cycle_count = 0;
    
    for (int i=0; i<e; i++) {
        int a, b;
        cin >> a >> b;
        
        if (dsu_find(a) == dsu_find(b)) {
            cycle_count++;
        } else {
            dsu_union_by_size(a, b);
        }
    }
    
    cout << cycle_count << endl;

    return 0;
}
