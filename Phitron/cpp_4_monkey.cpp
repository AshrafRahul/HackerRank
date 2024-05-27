#include<bits/stdc++.h>
using namespace std;

void sortPrint(char *str) {
    int count[26] = {0};
    int i=0;
    while(str[i] != '\0') {
        if(str[i] != ' ') count[str[i] - 'a']++;
        i++;
    }

    for(int j=0; j<26; j++) {
        for(int k=0; k<count[j]; k++) cout << (char)('a'+j);
    } cout << endl;
}
int main() {
    char str[100001];
    while(cin.getline(str, 100001)) sortPrint(str);

    return 0;
}