#include<stdio.h>
int main(){
    int n,sum;
    sum=0;
    printf("Enter any number : ");
    scanf("%d",&n);
    for(int i=1;i<n;i++){
        if(n%i==0){
            sum=sum+i;
        }
    }
    if(sum==n)
    printf("%d is perfect number",n);
}