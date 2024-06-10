#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    getchar();

    while(t--) {
        string s, x;
        cin >> s >> x;

        int pos = 0;
        while(pos < s.length()) {
            pos = s.find(x, pos);
            if(pos >= s.length()) break;

            s.replace(pos, x.length(), "#");
            pos++;
        }
        cout << s << endl;
        getchar();
    }

    return 0;
}
