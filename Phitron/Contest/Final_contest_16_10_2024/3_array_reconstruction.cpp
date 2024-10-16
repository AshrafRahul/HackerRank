#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >>n;

        vector<ll> a(n-2);
        ll remainingSum = 0;

        for(int i=0; i<n-2; i++) {
            cin >> a[i];
            remainingSum += a[i];
        }

        ll s;
        cin >> s;

        ll d = s-remainingSum;

        if(d>=0) cout << d+1 << endl;
        else cout << 0 << endl;
    }

    return 0;
}
