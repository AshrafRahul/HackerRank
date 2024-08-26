#include<stdio.h>
int main() {
    int n;
    scanf("%d", &n);

    int rem, revNum=0;
    for(int i=n; i!=0; i/=10) {
        rem = i%10;
        revNum = revNum*10 + rem;
    } printf("%d\n", revNum);

    return 0;
}