#include<stdio.h>
int main() {
    int n;
    scanf("%d", &n);

    int a[n], posSum=0, negSum=0;
    for(int i=0; i<n; i++) {
        scanf("%d", &a[i]);

        if(a[i] > 0) posSum+=a[i];
        else negSum+=a[i];
    } printf("%d %d\n", posSum, negSum);

    return 0;
}