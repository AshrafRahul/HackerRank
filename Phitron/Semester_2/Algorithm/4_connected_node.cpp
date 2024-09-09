#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, e;
    cin >> n >> e;

    vector<vector<int>> v(n);
    while(e--) {
        int a, b;
        cin >> a >> b;

        v[a].push_back(b);
        v[b].push_back(a);
    }

    int q;
    cin >> q;

    while(q--) {
        int node;
        cin >> node;

        if(v[node].empty()) cout << -1 << endl;
        else {
            sort(v[node].rbegin(), v[node].rend());
            for(int child: v[node]) cout << child << " ";
            cout << endl;
        }
    }

    return 0;
}
