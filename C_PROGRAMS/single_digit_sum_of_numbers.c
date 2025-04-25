#include<stdio.h>
int main(){
    int n;
    printf("Enter any number");
    scanf("%d",&n);
    if(n%9==0){
        printf("The sum of digits is 9");
    }
    printf("The sum of digits is %d",n%9);
    return 0;
}