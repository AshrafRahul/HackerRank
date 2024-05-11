#include<stdio.h>
#include<stdlib.h>
int main() {
    int t;
    scanf("%d", &t);

    while(t--) {
        int n;
        scanf("%d", &n);
        int a[n], b[n];
        for(int i=0; i<n; i++) scanf("%d", &a[i]);
        for(int i=0; i<n; i++) b[i] = a[i];
        for(int i=0; i<n-1; i++) {
            for(int j=i+1; j<n; j++) {
                if(a[i] > a[j]) {
                    int temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
        }
        for(int i=0; i<n; i++) printf("%d ", abs(a[i]-b[i]));
        printf("\n");
    }

    return 0;
}