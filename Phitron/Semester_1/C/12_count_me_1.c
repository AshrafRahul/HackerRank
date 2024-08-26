#include<stdio.h>
int main() {
    int n;
    scanf("%d", &n);

    long long int a[n], count2=0, count3=0;
    for(int i=0; i<n; i++) {
        scanf("%lld", &a[i]);

        if(a[i]%2==0 && a[i]%3==0) count2++;
        else if(a[i]%2==0) count2++;
        else if(a[i]%3==0) count3++;
    } printf("%d %d\n", count2, count3);

    return 0;
}