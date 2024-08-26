#include<stdio.h>
int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        long long int m, a, b, c;
        scanf("%lld %lld %lld %lld", &m, &a, &b, &c);

        if(m%(a*b*c)==0) printf("%lld\n", m/(a*b*c));
        else if(m%(a*b*c)!=0) printf("-1\n");
        else if(m==0) printf("0\n");
    }

    return 0;
}