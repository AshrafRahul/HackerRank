#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    cin.ignore();

    while(t--) {
        string sentence;
        getline(cin, sentence);

        map<string, int> wordCount;
        stringstream ss(sentence);
        string word;
        string mostFrequentWord;
        int maxxCount = 0;

        while(ss >> word) {
            wordCount[word]++;

            if (wordCount[word] > maxxCount || (wordCount[word] == maxxCount && mostFrequentWord.empty())) {
                maxxCount = wordCount[word];
                mostFrequentWord = word;
            }
        } cout << mostFrequentWord << " " << maxxCount << endl;
    }

    return 0;
}
