#include<stdio.h>

void odd_even() {
    int n;
    scanf("%d", &n);

    int a[n];
    for(int i=0; i<n; i++) scanf("%d", &a[i]);

    int evenCount=0, oddCount=0;
    for(int i=0; i<n; i++) {
        if(a[i]%2==0) evenCount++;
        else oddCount++;
    }
    printf("%d %d\n", evenCount, oddCount);
}

int main() {
    odd_even();

    return 0;
}