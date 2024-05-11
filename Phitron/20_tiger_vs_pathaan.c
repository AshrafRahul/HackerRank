#include<stdio.h>
#include<string.h>
int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        int n;
        scanf("%d", &n);
        char s[n+1];
        int pathan=0, tiger=0;
        for(int i=0; i<n+1; i++) {
            scanf("%c", &s[i]);
            if(s[i]=='T') tiger++;
            if(s[i]=='P') pathan++;
        }
        if(pathan>tiger) printf("Pathaan\n");
        else if(tiger>pathan) printf("Tiger\n");
        else printf("Draw\n");
    }

    return 0;
}