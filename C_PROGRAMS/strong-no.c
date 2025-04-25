#include<stdio.h>
int main(){
    int c,a,last,sum=0;
    printf("Enter any number : ");
    scanf("%d",&c);
    a=c;
    int prod;
    while(c!=0){
        last=c%10;
        prod=1;
        for(int i=1;i<=last;i++){
            prod=prod*i;
        }
        sum=sum+prod;
        c=c/10;
    }
    if(sum==a)
    printf("Strong Number");
    else
    printf("Weak Number");
}