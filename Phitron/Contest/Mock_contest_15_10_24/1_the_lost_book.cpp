#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, target;
    cin >> n;
    vector<int> books(n);
    for (int i = 0; i < n; i++) {
        cin >> books[i];
    }
    cin >> target;

    int index = -1;
    for (int i = 0; i < n; i++) {
        if (books[i] == target) {
            index = i;
            break;
        }
    }

    cout << index << endl;
    return 0;
}
