#include <bits/stdc++.h>
#define ll long long int
using namespace std;


int main() {
    ll n, q;
    cin >> n >> q;

    vector<int> s(n);
    ll val = 1;
    for (ll i=0; i<n; i+=2) {
        s[i] = val;
        s[i+1] = val;
        val++;
    }

    vector<int> pSum(n+1, 0);
    for (ll i=0; i<n; i++) {
        pSum[i+1] = pSum[i] + s[i];
    }

    while (q--) {
        ll L, R;
        cin >> L >> R;
        ll sum = pSum[R] - pSum[L - 1];
        cout << sum << endl;
    }

    return 0;
}
