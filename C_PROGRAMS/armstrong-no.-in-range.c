#include <stdio.h>
int main() {
    int sum,count,a,b,c,last;
    for(int j=100; j<=10000; j++) {
	    sum=0;
	    count=0;
	    a=b=c=j;
	    while(c!=0){
	        count++;
	        c=c/10;
	    }
	    while(b!=0){
	        last=b%10;
	        int prod=1;
	        for(int k=1; k<=count;k++){
	            prod=prod*last;
	        }
	        sum+=prod;
	        b=b/10;
	    }
	    if(sum==a)
	    printf("%d\n",a);
    }
    return 0;
}