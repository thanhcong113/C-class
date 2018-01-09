#include <stdio.h>
void main(void){
	int sum=0;
	int i,n;
	printf("n?"); scanf("%d",&n);
	for(i=1;i<=n;i+=2){
		sum += i;
		
	}
	printf("1+2+3.....+%d=%d\n",n,sum);
}