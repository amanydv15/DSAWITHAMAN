// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int a[10]={15,20,45,80,75,90};
    int i=0,n=0;
    while(a[i]!=0){
        i++;
        n++;
    }
 int index =2;
for(int j=index;j<(n-1);j++){
    a[j]=a[j+1];
    } 
    
   
n--;
    for(i=0;i<n;i++){
        printf("%d\n",a[i]);
    }

    return 0;
}