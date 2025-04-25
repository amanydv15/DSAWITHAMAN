#include <stdio.h>
int main() {
    int sum,count,a,b,c,last;
    for(int j=1; j<=50000; j++) {
	    sum=0;
	    count=0;
	    a=b=j;
	    while(b!=0){
	        last=b%10;
	        int prod=1;
	        for(int k=1; k<=last;k++){
	            prod=prod*k;
	        }
	        sum+=prod;
	        b=b/10;
	    }
	    if(sum==a)
	    printf("%d\n",a);
    }
    return 0;
}