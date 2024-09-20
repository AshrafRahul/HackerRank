#include <bits/stdc++.h>
using namespace std;

int chocolates(int money) {
    int chocolatesBought = money / 5;
    int wrappers = chocolatesBought;
    int additionalChocolates = 0;

    while (wrappers >= 3) {
        additionalChocolates += wrappers / 3;
        wrappers = wrappers % 3 + wrappers / 3;
    }

    return chocolatesBought + additionalChocolates;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        cout << chocolates(n) << endl;
    }

    return 0;
}