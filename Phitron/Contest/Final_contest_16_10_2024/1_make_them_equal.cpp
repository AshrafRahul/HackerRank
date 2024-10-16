#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    while(n--) {
        int a, b;
        cin >> a >> b;

        string s1, s2;
        cin >> s1 >> s2;

        int count=0;
        for(int i=0; i<a; i++) {
            if(s1[i]!=s2[i]) count++;
        }

        if(count<=b) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}
