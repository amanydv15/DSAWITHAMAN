#include <stdio.h>
int main() {
   int n,rev,last;
   printf("Enter any number: ");
   scanf("%d",&n);
   rev=0;
   while(n!=0){
       last=n%10;
       rev=rev*10+last;
       n=n/10;
   }
   printf("%d\n",rev);
    return 0;
}