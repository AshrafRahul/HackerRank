#include<stdio.h>
#include<string.h>
int main() {
    char s[10001];
    scanf("%s", s);

    int count[26] = {0};
    for(int i=0; i<strlen(s); i++) {
        int value = s[i] - 'a';
        count[value]++;
    }

    for(char c='a'; c<='z'; c++) {
        int value = c - 'a';
        if(count[value]!=0) {
            printf("%c - %d\n", value+'a', count[value]);
        }
        count[value] = 0;
    }

    return 0;
}