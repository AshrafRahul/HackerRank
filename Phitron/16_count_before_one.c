#include<stdio.h>

int count_before_one(int ar[], int n) {
    int count=0;
    for(int i=0; i<n; i++) {
        if(ar[i] == 1) break;
        else count++;
    } return count;
}

int main() {
    int n;
    scanf("%d", &n);

    int a[n];
    for(int i=0; i<n; i++) {
        scanf("%d", a+i);
    }

    int cnt = count_before_one(a, n);
    printf("%d\n", cnt);

    return 0;
}