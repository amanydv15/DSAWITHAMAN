#include<stdio.h>
int main(){
    int n,c,a,last,sum=0;
    printf("Enter any number : ");
    scanf("%d",&n);
    c=n;
    while(n!=0){
        last=n%10;
        sum=sum+(last*last*last);
        n=n/10;
    }
    if(sum==c)
    printf("Bahubali Number");
    else
    printf("Kamjor Number");
}