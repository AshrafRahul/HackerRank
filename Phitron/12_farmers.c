#include<stdio.h>
int main() {
    int n;
    scanf("%d", &n);

    while(n--) {
        int m1,m2,d;
        scanf("%d %d %d", &m1, &m2, &d);

        int newDays = (m1*d)/(m1+m2);
        printf("%d\n", d-newDays);
    }

    return 0;
}