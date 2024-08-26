#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    if(n!=m) {
        cout << "NO" << endl;
        return 0;
    }

    stack<int> st;
    queue<int> q;

    for(int i=0; i<n; i++) {
        int x;
        cin >> x;
        st.push(x);
    }

    for(int i=0; i<m; i++) {
        int x;
        cin >> x;
        q.push(x);
    }

    bool checkSame = true;

    while(!st.empty() && !q.empty()) {
        if(st.top() != q.front()) {
            checkSame = false;
            break;
        }
        st.pop();
        q.pop();
    }

    if(checkSame) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}
