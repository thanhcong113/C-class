#include <stdio.h>
void main(void){
	int sum=0;
	int i,n=999;

	for(i=100;i<=n;i++){
		sum += i;
		
	}
	printf("101+102+.... %d=%d\n",n,sum);
}