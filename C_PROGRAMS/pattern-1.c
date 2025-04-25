#include <stdio.h>
int main() {
    int i, j,n;
    printf("Enter n :");
    scanf("%d",&n);
    // Upper half of the pattern
    for (i = 1; i <=(n/2+1); i++) {
        for(int s=1;s<=(n/2+1 - i);s++)
            printf(" ");
        for (j = 1; j <= (2 * i - 1); j++) 
            printf("*");
        printf("\n");
    }
    // Lower half of the pattern
    for (i = n/2+1 - 1; i >= 1; i--) {
        for(int s=1;s<=(n/2+1-i);s++)
            printf(" ");
        for (j = 1; j <= (2 * i - 1); j++) 
            printf("*");
        printf("\n");
    }
    return 0;
}
