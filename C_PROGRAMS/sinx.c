#include <stdio.h>
int main() {
    int x,prod,terms;
    double sum,y;
    sum=0.0;
    printf("Enter No. of Terms: ");
    scanf("%d",&terms);
    printf("Enter any value: ");
    scanf("%d",&x);
    for(int i=1;i<=(2*terms-1);i=i+2){
        prod=1;
        for(int j=1;j<=i;j++){
            prod=prod*j;
        }
        y=1.0;
        for(int k=1;k<=i;k++){
           y=y*x;
        }
       
    if(i%4==1)
    sum=sum+(y/prod);
    else
    sum=sum-(y/prod);
    printf("sum is %f\n",sum);
    }
    printf("The value of sin%d is %f",x,sum);
    return 0;
}