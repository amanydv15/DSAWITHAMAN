#include <stdio.h>
int main() {
    int a1[7]={10,15,20,25,38,56,87};
    int a2[5]={12,17,24,36,48};
    int c[8];
    int n1=sizeof(a1)/4;
    int n2=sizeof(a2)/4;
    int m,n,p;// initialize to 1st elements
    m=0; 
    n=0;
    p=0;
    while(m<n1 && n<n2){
        
        if(a1[m]<a2[n]){
            c[p]=a1[m];
            m++;
            p++;
        }
        else{
            c[p]=a2[n];
            n++;
            p++;
        }
    } 
    if(m==n1){
            printf("Array 1 is completed now only array 2 will work\n");
            while(n<n2){
           c[p++]=a2[n++];
            }
        }
        if(n==n2 && m<n1){
            printf("Array 2 is completed now only array 1 will work\n");
            while(m<n1){
           c[p++]=a1[m++];
            }
        }
    for(int i=0;i<n1+n2;i++){
        printf("%d\n",c[i]);
    }
    
    return 0;
}