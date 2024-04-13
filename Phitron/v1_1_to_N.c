#include<stdio.h>
int main() {
    long long int n;
    scanf("%lld", &n);

    long long int sum=0;
    for(long long int i=1; i<=n; i++) sum += i;
    printf("%lld\n", sum);

    return 0;
}