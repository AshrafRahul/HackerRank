#include <bits/stdc++.h>
#define ll long long int
using namespace std;

class Edge {
public:
    ll u, v, c;
    Edge(ll u, ll v, ll c) {
        this->u = u;
        this->v = v;
        this->c = c;
    }
};

const ll INF = LLONG_MAX;
const ll N = 1e3 + 5;
ll dis[N];

int main() {
    ll n, e;
    cin >> n >> e;
    vector<Edge> EdgeList;
    for (ll i = 0; i < e; i++) {
        ll u, v, c;
        cin >> u >> v >> c;
        EdgeList.push_back(Edge(u, v, c));
    }
    
    ll source;
    cin >> source;
    
    for (ll i = 1; i <= n; i++) {
        dis[i] = INF;
    }
    dis[source] = 0;
    
    for (ll i = 1; i <= n - 1; i++) {
        for (Edge ed : EdgeList) {
            ll u = ed.u;
            ll v = ed.v;
            ll c = ed.c;
            if (dis[u] != INF && dis[u] + c < dis[v]) {
                dis[v] = dis[u] + c;
            }
        }
    }
    
    bool cycle = false;
    for (Edge ed : EdgeList) {
        ll u = ed.u;
        ll v = ed.v;
        ll c = ed.c;
        if (dis[u] != INF && dis[u] + c < dis[v]) {
            cycle = true;
            break;
        }
    }
    
    if (cycle) {
        cout << "Negative Cycle Detected" << endl;
    } else {
        ll T;
        cin >> T;
        while (T--) {
            ll destination;
            cin >> destination;
            if (dis[destination] == INF) {
                cout << "Not Possible" << endl;
            } else {
                cout << dis[destination] << endl;
            }
        }
    }
    
    return 0;
}
