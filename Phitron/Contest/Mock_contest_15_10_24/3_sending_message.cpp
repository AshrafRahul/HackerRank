#include<bits/stdc++.h>
using namespace std;

bool isPossible(string word1, string word2) {
    int n = word1.length();
    int m = word2.length();

    int j=0;
    for(int i=0; i<n && j<m; i++) {
        if(word1[i] == word2[j]) j++;
    }
    return (j==m);
}

int main() {
    string word1, word2;
    while(cin >> word1 >> word2) {
        if(isPossible(word1, word2)) cout << "Possible" << endl;
        else cout << "Impossible" << endl;
    }

    return 0;
}
