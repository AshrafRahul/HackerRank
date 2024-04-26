#include<stdio.h>
int main() {
    int t;
    scanf("%d", &t);

    while(t--) {
        int n;
        scanf("%d", &n);
        long long int a[n];
        for(int i=0; i<n; i++) scanf("%lld", &a[i]);
        int x;
        scanf("%d", &x);
        
        int count=0;
        for(int i=0; i<n; i++) {
            if(a[i]==x) {
                count=1;
                break;
            } 
        }
        if(count) printf("YES\n");
        else printf("NO\n");
    }

    return 0;
}