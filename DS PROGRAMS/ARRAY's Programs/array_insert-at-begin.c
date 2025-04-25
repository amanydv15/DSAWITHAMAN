// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int a[10]={15,20,45,80,75,90};
    int i=0,n=0; // n is no. of elements in array
    while(a[i]!=0){
        i++;
        n++;
    }
    int index =0;
    for(int j=n;j>index;j--){
        a[j]=a[j-1];
    }
    a[index]=24;
    for(i=0;a[i]!=0;i++){
        printf("%d\n",a[i]);
    }

    return 0;
}