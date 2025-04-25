#include <stdio.h>
#include <limits.h>
int main() {
    int a[10]={158,2470,2495,1800,2155,2980};
    int i=0,n=0;
    while(a[i]!=0){
        i++;
        n++;
    }
 int max1=INT_MIN;
 int max2=INT_MIN;
    for(i=0;i<n;i++){
        if(a[i]>max1){
            max1=a[i];
        }
    }
     for(i=0;i<n;i++){
        if(a[i]>max2 && a[i]<max1){
            max2=a[i];
        }
    }
    
     printf("the 1st maximum value in array is %d\n",max1);
     printf("the 2nd maximum value in array is %d",max2);
    return 0;
}