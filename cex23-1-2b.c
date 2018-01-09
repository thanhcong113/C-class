#include <stdio.h>
void main(void){
	int sum=0;
	int i,n=100;

	for(i=n;i>0;i--){
		sum += i;
		
	}
	printf("sum %d...+2+1=%d\n",n,sum);
}