#include<stdio.h>
int main() {
    int n;
    scanf("%d", &n);

    int count=0;
    while(n>0) {
        if(n>=3) {
            n -= 3;
            count++;
        } else if(n<3 && n>=2) {
            n -= 2;
            count++;
        } else if(n<2 && n>=1) {
            n -= 1;
            count++;
        }
    } printf("%d\n", count);

    return 0;
}