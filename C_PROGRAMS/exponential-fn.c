#include <stdio.h>

int main() {
    int x,prod,terms;
    double sum,y;
    sum=1.0;
    printf("Enter no. of terms: ");
    scanf("%d",&terms);
    printf("Enter any value: ");
    scanf("%d",&x);
    for(int i=1;i<=terms;i++){
        prod=1;
        for(int j=1;j<=i;j++){
            prod=prod*j;
        }
        y=1.0;
        for(int k=1;k<=i;k++){
           y=y*x;
        }
        sum=sum+(y/prod);
    }
    printf("The value of e ^ %d is %f",x,sum);
    return 0;
}