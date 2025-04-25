#include<stdio.h>
int main() {
	int prod;
	float sum;
	sum=0.0;
	for(int i=1; i<=5; i++) {
		prod=1;
		for(int j=1; j<=i; j++) {
			prod=prod*j;
		}
		
		sum=sum+(1.0/prod);
		
	}
printf("%f\n",sum);

	return 0;
}