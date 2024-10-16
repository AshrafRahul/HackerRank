#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin >> a[i];

    ll tSum = 0;
    for(int i=0; i<n; i++) tSum += a[i];

    ll pSum = 0;
    for(int i=0; i<n; i++) {
        pSum += a[i];
        ll sSum = tSum-pSum+a[i];
        
        if(pSum == sSum) {
            cout << pSum << " " << i+1 << endl;
            return 0;
        }
    }
    cout << "UNSTABLE" << endl;

    return 0;
}
