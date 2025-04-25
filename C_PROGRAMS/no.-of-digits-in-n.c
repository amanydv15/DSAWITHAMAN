#include<stdio.h>
int main(){
    int n,count;
    count=0;
    printf("Enter any number : ");
    scanf("%d",&n);
    while(n!=0){
        count++;
        n=n/10;
    }
    printf("The number of digits in given no. is %d",count);
}