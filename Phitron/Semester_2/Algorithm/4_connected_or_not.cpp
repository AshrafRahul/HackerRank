#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, e;
    cin >> n >> e;

    vector<vector<int>> v(n, vector<int>(n, 0));

    while(e--) {
        int a, b;
        cin >> a >> b;
        v[a][b] = 1;
    }

    int Q;
    cin >> Q;

    for (int i = 0; i < Q; ++i) {
        int A, B;
        cin >> A >> B;
        
        if (A == B || v[A][B] == 1) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
