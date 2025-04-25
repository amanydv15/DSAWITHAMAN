#include<stdio.h>
int main(){
    int n,c=0;
    printf("Enter any number : ");
    scanf("%d",&n);
    if(n==1){
        printf("1 is not prime");
    }
    for(int i=2;i<n;i++){
        if(n%i==0){
            c++;
            break;
        }
    }
        if(c==0)
        printf("%d is Prime Number\n",n);
        else
        printf("%d is Not a Prime Number\n",n);
}