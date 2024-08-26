#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main() {
    int n;
    scanf("%d", &n);

    while(n--) {
        char c[10001];
        scanf("%s", c);

        int small=0, capital=0, digit=0;
        for(int i=0; c[i]!='\0'; i++) {
            if(c[i] >= 'A' && c[i] <= 'Z') capital++;
            else if(c[i] >= 'a' && c[i] <= 'z') small++;
            else if(c[i] >= '0' && c[i] <= '9') digit++;
        }
        printf("%d %d %d\n", capital, small, digit);
    }

    return 0;
}