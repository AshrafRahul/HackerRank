#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int q;
    cin >> q;

    map<int, int> m;
    priority_queue<pair<int, int>> pq;

    while(q--) {
        int type;
        cin >> type;

        if(type==1) {
            ll x;
            cin >> x;
            m[x]++;
            pq.push({m[x], x});
        } else {
            while(!pq.empty()) {
                int currFrequence = pq.top().first;
                int value = pq.top().second;

                if (m[value] == currFrequence) {
                    cout << value << endl;
                    m[value] -= max(1, currFrequence-1);
                    break;
                }
                pq.pop();
            }

            if (pq.empty()) cout << "empty" << endl;
        }
    }

    return 0;
}
