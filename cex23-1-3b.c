#include <stdio.h>
void main(void){
	int sum=0;
	int i,n=100;

	for(i=1;i!=n;i++){
		if(i%2==0)
		sum += i;
		
	}
	printf("sum 1to %d=%d\n",n,sum);
}