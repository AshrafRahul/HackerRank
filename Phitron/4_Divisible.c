#include<stdio.h>
int main() {
    long long int num;
    scanf("%lld", &num);

    if(num%3==0) printf("YES\n");
    else printf("NO\n");

    return 0;
}