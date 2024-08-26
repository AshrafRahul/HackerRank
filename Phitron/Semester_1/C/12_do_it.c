#include<stdio.h>
int main() {
    int n,k;
    scanf("%d %d", &n, &k);

    while(n--) {
        for(int i=1; i<=k; i++) {
            printf("%d ", i);
        }printf("\n");
    }

    return 0;
}