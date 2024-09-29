#include <bits/stdc++.h>
#define ll long long int
using namespace std;

class Edge {
public:
    ll u, v, w;
    Edge(ll u, ll v, ll w) {
        this->u = u;
        this->v = v;
        this->w = w;
    }
};

bool cmp(Edge a, Edge b) {
    return a.w < b.w;
}

const int N = 1e5 + 5;
int parent[N];
int group_size[N];

void dsu_initialize(int n) {
    for (ll i=1; i<=n; i++) {
        parent[i] = -1;
        group_size[i] = 1;
    }
}

int dsu_find(int node) {
    if (parent[node] == -1)
        return node;
    return parent[node] = dsu_find(parent[node]);
}

void dsu_union_by_size(ll node1, ll node2) {
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
    ll n, e;
    cin >> n >> e;
    
    vector<Edge> edgeList;
    
    for (ll i=0; i<e; i++) {
        int a, b, w;
        cin >> a >> b >> w;
        edgeList.push_back(Edge(a, b, w));
    }
    
    dsu_initialize(n);
    
    sort(edgeList.begin(), edgeList.end(), cmp);
    
    ll totalCost = 0;
    ll edgesUsed = 0;
    
    for (Edge ed : edgeList) {
        ll leaderU = dsu_find(ed.u);
        ll leaderV = dsu_find(ed.v);
        
        if (leaderU != leaderV) {
            dsu_union_by_size(ed.u, ed.v);
            totalCost += ed.w;
            edgesUsed++;
        }
        
        if (edgesUsed == n-1) {
            break;
        }
    }
    
    if (edgesUsed == n-1) {
        cout << totalCost << endl;
    } else {
        cout << -1 << endl;
    }
    
    return 0;
}
