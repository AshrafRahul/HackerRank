#include<stdio.h>
int main() {
    int n;
    scanf("%d", &n);

    int num = (n/5)-4;
    for(int i=0; i<5; i++) {
        printf("%d ", num);
        num += 2;
    } printf("\n");

    return 0;
}