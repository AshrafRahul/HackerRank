#include<stdio.h>
int main() {
    int n;
    scanf("%d", &n);

    int num = (n/4)-3;
    for(int i=0; i<4; i++) {
        printf("%d ", num);
        num += 2;
    } printf("\n");

    return 0;
}