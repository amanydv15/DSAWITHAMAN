#include <stdio.h>
int main() {
   int n,a,rev,last;
   printf("Enter any number: ");
   scanf("%d",&n);
   rev=0;
   a=n;
   while(n!=0){
       last=n%10;
       rev=rev*10+last;
       n=n/10;
   }
   if(rev==a)
   printf("The given no. is Palindrome Number");
   else
    printf("The given no. is not a Palindrome Number");
    return 0;
}