#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i=0; i<n; i++) cin >> a[i];
    
    sort(a.rbegin(), a.rend());
    
    set<int> tkn;
    int totalBall = 0;
    
    for (int i = 0; i < n; i++) {
        int maxTake = a[i];
        while (maxTake>0 && tkn.count(maxTake)>0) {
            maxTake--;
        }
        if (maxTake > 0) {
            tkn.insert(maxTake);
            totalBall += maxTake;
        }
    }
    
    cout << totalBall << endl;
    return 0;
}
