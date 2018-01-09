#include <stdio.h>
void main(void){
	int sum=0;
	int i,n=100;

	for(i=1;i<=n;i+=2){
		sum += i;
		
	}
	printf("sum 1 to %d=%d\n",n,sum);
}