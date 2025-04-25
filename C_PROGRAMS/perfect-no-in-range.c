#include <stdio.h>
int main() {
	int sum,start,end;
	printf("Enter starting and ending range: ");
	scanf("%d %d",&start,&end);
	for(int j=start; j<=end; j++) {
	    sum=0;
		for(int i=1; i<j; i++) {
			if(j%i==0) {
				sum+=i;
			}
		}
		if(j==sum)
			printf("%d ",j);
	}
	return 0;
}