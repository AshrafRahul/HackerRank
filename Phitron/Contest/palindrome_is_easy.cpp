#include <bits/stdc++.h>
using namespace std;

int countOddFrequencies(const vector<vector<int>>& prefixFreq, int L, int R) {
    int oddCount = 0;
    for (int i = 0; i < 26; ++i) {
        int charFreq = prefixFreq[i][R] - prefixFreq[i][L - 1];
        if (charFreq % 2 != 0) {
            oddCount++;
        }
    }
    return oddCount;
}

int main() {
    int N;
    cin >> N;
    string S;
    cin >> S;
    
    vector<vector<int>> prefixFreq(26, vector<int>(N + 1, 0));
    
    for (int i = 1; i <= N; ++i) {
        for (int j = 0; j < 26; ++j) {
            prefixFreq[j][i] = prefixFreq[j][i - 1];
        }
        prefixFreq[S[i - 1] - 'a'][i]++;
    }
    
    int Q;
    cin >> Q;
    
    while (Q--) {
        int L, R, K;
        cin >> L >> R >> K;
        
        int oddCount = countOddFrequencies(prefixFreq, L, R);
        
        int substringLength = R - L + 1;
        if (oddCount / 2 <= K) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}
