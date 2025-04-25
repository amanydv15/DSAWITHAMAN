#include<stdio.h>
int main(){
    int n,c,a,last,cn=0,sum=0;
    printf("Enter any number : ");
    scanf("%d",&n);
    a=c=n;
    int prod;
    while(n!=0){
        cn++;
        n=n/10;
    }
    while(c!=0){
        last=c%10;
        prod=1;
        for(int i=1;i<=cn;i++){
            prod=prod*last;
        }
        sum=sum+prod;
        c=c/10;
    }
    if(sum==a)
    printf("Bahubali Number");
    else
    printf("Kamjor Number");
}
