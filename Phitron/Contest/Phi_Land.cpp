#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    for (int i = 0; i < s.size(); i++) {
        s[i] = tolower(s[i]);
    }

    reverse(s.begin(), s.end());
    cout << s << endl;

    return 0;
}