#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    priority_queue<int, vector<int>, greater<int>> pq;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        pq.push(x);
    }

    int q;
    cin >> q;

    while (q--) {
        int c;
        cin >> c;

        if (c == 0) {
            int x;
            cin >> x;
            pq.push(x);
            cout << pq.top() << endl; 
        } else if (c == 1) {
            if (!pq.empty()) {
                cout << pq.top() << endl;
            } else {
                cout << "Empty" << endl;
            }
        } else if (c == 2) { 
            if (!pq.empty()) {
                pq.pop();
                if (!pq.empty()) {
                    cout << pq.top() << endl;
                } else {
                    cout << "Empty" << endl;
                }
            } else {
                cout << "Empty" << endl;
            }
        } else {
            cout << "Invalid command" << endl;
        }
    }

    return 0;
}