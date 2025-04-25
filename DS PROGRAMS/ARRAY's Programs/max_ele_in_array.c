// Online C compiler to run C program online
#include <stdio.h>
#include <limits.h>

int main() {
    int a[10]={15,20,45,180,75,90};
    int i=0,n=0;
    
    while(a[i]!=0){
        i++;
        n++;
    }
 int max=INT_MIN;
    for(i=0;i<n;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
     printf("the maximum value in array is %d",max);

    return 0;
}