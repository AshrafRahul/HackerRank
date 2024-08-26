#include<stdio.h>
#include<string.h>

int is_palindrome(char *str) {
    int len = strlen(str), i, j;
    for(i=0, j=len-1; i<j; i++, j--) {
        if(str[i] != str[j]) return 0;
    } return 1;
}

int main() {
    char s[1001];
    scanf("%s", s);

    int res = is_palindrome(s);

    if(res==1) printf("Palindrome\n");
    else printf("Not Palindrome\n");

    return 0;
}