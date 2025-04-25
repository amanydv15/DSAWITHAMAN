#include<stdio.h>
int main()
{
int a[10]={10,5,7,8};
a[4]=15;
for(int i=0;i<10;i++){
   printf("%d ",a[i]); 
}

return 0;
}